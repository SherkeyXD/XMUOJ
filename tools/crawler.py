# 用于快速爬取实验题目信息
from playwright.sync_api import Playwright, sync_playwright
from bs4 import BeautifulSoup as bs
from secret import username, password
from pathlib import Path

import time

def run(playwright: Playwright, url : str) -> None:
    global info
    browser = playwright.chromium.launch(headless=False)
    context = browser.new_context()
    page = context.new_page()
    page.goto(url)
    page.get_by_placeholder("用户名").fill(username)
    page.get_by_placeholder("密码").fill(password)
    page.get_by_role("button", name="登录").nth(1).click()
    exp_pass = input("Enter the password: ")
    page.get_by_placeholder("contest password").fill(exp_pass)
    page.get_by_role("button", name="Enter").click()
    page.locator("#contest-menu").get_by_text("问题").click()
    time.sleep(1)
    soup = bs(page.content(), "lxml")
    question_list = soup.find("tbody", class_="ivu-table-tbody").find_all("tr")
    for i in question_list:
        question_info = i.find_all("td")
        info[question_info[0].text.strip()] = question_info[1].text.strip()
    context.close()
    browser.close()

exp_dir = Path(__file__).parent.parent / "exp"
question_dir = Path(__file__).parent.parent / "XMUOJ"

info = {}

url = input("Enter the url: ")

with sync_playwright() as playwright:
    run(playwright, url)

for code, name in info.items():
    dir_path = question_dir / code
    file = dir_path / "main.cpp"
    link = exp_dir / f"{name}.cpp"
    dir_path.mkdir(parents=True, exist_ok=True)
    link.parent.mkdir(parents=True, exist_ok=True)
    if not any(dir_path.glob('main.*')):
        with open(file, "w", encoding="utf-8") as f:
            f.write("#include <bits/stdc++.h>\nusing namespace std;\n")
        link.symlink_to(file, target_is_directory=False)