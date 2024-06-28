from utils import XMUOJAPI, XMUOJProblemInfo
from concurrent.futures import ThreadPoolExecutor

from pathlib import Path

OJ_dir = Path(__file__).parent.parent / "XMUOJ"
TESTCASES_dir = Path(__file__).parent.parent / "test/tests"

problems = XMUOJAPI.get_problem_list()


def process_problem(problem):
    info = XMUOJProblemInfo(problem)
    problem_dir = OJ_dir / problem["id"]
    if problem_dir.exists():
        info.save_problem_markdown(problem_dir)
        info.save_problem_testcases(problem_dir)
        info.make_problem_testcases_link(problem_dir)


with ThreadPoolExecutor() as executor:
    executor.map(process_problem, problems)
