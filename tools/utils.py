import requests
import json
import zipfile
import re
import io
from pathlib import Path

from rich.progress import Progress, BarColumn, MofNCompleteColumn, SpinnerColumn

base_url = "http://xmuoj.com"

difficulties_translate = {
    "Low": "低",
    "Mid": "中",
    "High": "高",
}


def process_html(text: str) -> str:
    pattern = re.compile(r"\$[^\$]*\$")
    matches = pattern.findall(text)
    for match in matches:
        text = text.replace(match, f" ${match[1:-1].strip()}$ ")
    return text


class XMUOJAPI:
    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.3"
    }

    @staticmethod
    def make_request(url: str, max_retry: int = 5):
        for _ in range(max_retry):
            res = requests.get(url, headers=XMUOJAPI.headers)
            if res.status_code == 200:
                return res.content
        return None

    @staticmethod
    def make_request_json(url: str, max_retry: int = 5):
        for _ in range(max_retry):
            res = requests.get(url, headers=XMUOJAPI.headers)
            if res.status_code == 200:
                if res.json()["error"] is None:
                    return res.json()["data"]
                else:
                    raise Exception(res.json()["error"])
        return None

    @staticmethod
    def get_problem_count():
        return XMUOJAPI.make_request_json(
            base_url + "/api/problem?paging=true&offset=0&limit=10000000&page=0"
        )["total"]

    @staticmethod
    def get_problem_info(id: str):
        return XMUOJAPI.make_request_json(base_url + f"/api/problem?problem_id={id}")

    @staticmethod
    def get_problem_testcases(real_id: str):
        return XMUOJAPI.make_request(
            base_url + f"/api/dl_test_case?problem_id={real_id}"
        )

    @staticmethod
    def get_problem_list(print_progress: bool = True) -> list:
        total = XMUOJAPI.get_problem_count()
        per_page = 100
        max_times = (total // per_page) + 1
        problems = []
        with Progress(
            SpinnerColumn(),
            "[progress.description]{task.description}",
            BarColumn(bar_width=50),
            "[progress.percentage]{task.percentage:>3.1f}%",
            MofNCompleteColumn(),
        ) as progress:
            task = progress.add_task(
                "[cyan]Querying problem info...", total=total, visible=print_progress
            )
            for page in range(0, max_times + 1):
                page_info = XMUOJAPI.make_request_json(
                    base_url
                    + f"/api/problem?paging=true&offset={page*per_page}&limit={per_page}&page={page}"
                )
                for problem in page_info["results"]:
                    #problems[problem["id"]] = problem
                    problems.append(problem)
                    progress.update(task, advance=1)
        return problems


class XMUOJProblemInfo:
    def __init__(self, info) -> None:
        self.info = info
        self.id = self.info["_id"]
        self.real_id = self.info["id"]
        self.title = self.info["title"]
        self.description = self.info["description"]
        self.input_description = self.info["input_description"]
        self.output_description = self.info["output_description"]
        self.samples = self.info["samples"]
        self.hint = self.info["hint"]
        self.languages = self.info["languages"]
        self.time_limit = self.info["time_limit"]
        self.memory_limit = self.info["memory_limit"]
        self.difficulty = difficulties_translate[self.info["difficulty"]]
        self.source = self.info["source"]
        self.io_mode = self.info["io_mode"]["io_mode"]

    def save_problem_json(self, filepath: str):
        with open(filepath, "w", encoding="utf-8") as f:
            json.dump(self.info, f, ensure_ascii=False, indent=4)

    def save_problem_testcases(self, filepath: str):
        testcases_path = Path(filepath) #/ "test"
        if testcases_path.exists() and len(list(testcases_path.iterdir())) > 0:
            return
        testcases_path.mkdir(parents=True, exist_ok=True)
        zip_data = XMUOJAPI.get_problem_testcases(self.real_id)
        with zipfile.ZipFile(io.BytesIO(zip_data)) as z:
            z.extractall(testcases_path)
        testcases_info = testcases_path / "info"
        testcases_info.rename(testcases_path / "info.json")

    def make_problem_testcases_link(self, filepath: str):
        src = Path(__file__).parent.parent / "test/tests" / self.id
        dst = Path(filepath) / "test"
        if src.exists() and not dst.exists():
            dst.symlink_to(src, target_is_directory=True)

    def save_problem_markdown(self, filepath: str):
        filepath = Path(filepath) / "README.md"
        if filepath.exists():
            return

        markdown = f"# {self.title}\n\n"

        markdown += f"| 题目链接 | [{self.title}]({base_url}/problem/{self.id}) |\n"
        markdown += "| --- | --- |\n"
        markdown += f"| 可用语言 | {', '.join(self.languages)} |\n"
        markdown += f"| 时间限制 | {self.time_limit} MS |\n"
        markdown += f"| 内存限制 | {self.memory_limit} MB |\n"
        markdown += f"| IO 类型 | {self.io_mode} |\n"
        markdown += f"| 难度 | {self.difficulty} |\n\n"

        markdown += f"## 题目描述\n\n{process_html(self.description)}\n\n"
        markdown += f"## 输入\n\n{process_html(self.input_description)}\n\n"
        markdown += f"## 输出\n\n{process_html(self.output_description)}\n\n"

        markdown += "## 样例\n\n"
        for index, sample in enumerate(self.samples):
            markdown += f"### 输入{index+1}\n\n```\n{sample['input']}\n```\n\n"
            markdown += f"### 输出{index+1}\n\n```\n{sample['output']}\n```\n\n"

        if self.hint != "":
            markdown += f"## 提示\n\n{self.hint}\n\n"

        if self.source != "":
            markdown += f"## 来源\n\n{self.source}\n\n"

        with open(filepath, "w", encoding="utf-8") as f:
            f.write(markdown)
