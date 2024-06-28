# XMUOJ

## 这是什么

这是厦门大学 OJ 网站 [XMUOJ](http://xmuoj.com/) 网站的题解

## 写在前面

代码中用到的 ~~很多~~ 部分思路可能来自于网络或者AI ~~别问，问就是不会~~，在此对原作者表示感谢，如果有什么问题通过 issue 联系我，我会予以删除或更改

本人算法水平不算好，轻喷（

## 如何贡献

欢迎提出 issue 或直接发起 pr

在 `XMUOJ` 文件夹下新建一个文件夹，文件夹名为题目编号（可以从 URL 中看到），然后运行 `tools/main.py`，脚本会自动获取题目的题面和测试数据，在该目录下以 `main.*` 的文件名写代码即可

本仓库额外包含了题目的测试数据作为一个 submodule，你可以在 clone 时加上 `--recurse-submodules` 参数，或者 clone 之后执行 `git submodule update --init --recursive` 来获取测试数据

如果在拉取了测试数据后运行 `tools/main.py`，还会在每个题目的目录中创建一个符号链接 `test` 指向测试数据的目录，以方便查看

## 一些闲话

该 OJ 系统为 [QingdaoU/OnlineJudge](https://github.com/QingdaoU/OnlineJudge)，因此 `tools` 文件夹中的脚本与 API 封装应该也适用于其他使用该系统的 OJ 网站

设立本仓库的灵感来自于我的朋友 [ltkk](https://github.com/ExceptionB)，他的题解仓库 [ExceptionB/XDOJ-Answers](https://github.com/ExceptionB/XDOJ-Answers)

## 活跃信息

![Activity](https://repobeats.axiom.co/api/embed/a410db0e8d0cd3ed8e81b64ae81d28310ce648b9.svg "Repobeats analytics image")
