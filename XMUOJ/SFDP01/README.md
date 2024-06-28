# 装配线调度问题

| 题目链接 | [装配线调度问题](http://xmuoj.com/problem/SFDP01) |
| --- | --- |
| 可用语言 | C, C++, Java, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p><img alt="image.png" src="/public/upload/6b1d9dadec.png" width="720" height="640" /><br /></p>

## 输入

<p>输入共 7 行</p><p>第一行一个数字，表示节点数n[2,10000]</p><p>第二行n个数字依次表示<span style="color: rgb(51, 51, 51);">第一条流水线处理时间[1,100]</span></p><p><span style="color: rgb(51, 51, 51);">第三行n个数字依次表示<span style="color: rgb(51, 51, 51);">第二条流水线处理时间[1,100]</span></span></p><p><span style="color: rgb(51, 51, 51);"><span style="color: rgb(51, 51, 51);">第四行n-1个数字依次表示<span style="color: rgb(51, 51, 51);">第一条流水线转至第二条流水线消耗时间[1,100]</span></span></span></p><p><span style="color: rgb(51, 51, 51);"><span style="color: rgb(51, 51, 51);"><span style="color: rgb(51, 51, 51);">第五行n-1个数字依次表示<span style="color: rgb(51, 51, 51);">第二条流水线转至第一条流水线消耗时间[1,100]</span></span></span></span></p><p><span style="color: rgb(51, 51, 51);"><span style="color: rgb(51, 51, 51);"><span style="color: rgb(51, 51, 51);"><span style="color: rgb(51, 51, 51);">第六行2个数字,分别表示送入流水线1和流水线2的入厂时间[1,100]</span></span></span></span></p><p>第七行2个数字,分别表示离开流水线1和流水线2的出场时间[1,100]</p>

## 输出

<p>输出最短时间<br /></p>

## 样例

### 输入1

```
6
7 9 3 4 8 4
8 5 6 4 5 7
2 3 1 3 4
2 1 2 2 1
2 4
3 2
```

### 输出1

```
38
```

## 提示

<p>来源：<span style="color: rgb(51, 51, 51);">张德富，</span>《算法设计与分析 》P<span style="color: rgb(51, 51, 51);">68：6.2</span><br /></p>

