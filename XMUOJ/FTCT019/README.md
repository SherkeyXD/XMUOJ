# 石子游戏

| 题目链接 | [石子游戏](http://xmuoj.com/problem/FTCT019) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><span style="color: rgb(51, 51, 51);">小</span><span style="color: rgb(51, 51, 51);">H</span><span style="color: rgb(51, 51, 51);">将</span><span style="color: rgb(51, 51, 51);">N(1&lt;=N&lt;=100)</span><span style="color: rgb(51, 51, 51);">个石子摆成一圈</span><span style="color: rgb(51, 51, 51);">.</span><span style="color: rgb(51, 51, 51);">现在要将石子有次序地合并成一堆</span><span style="color: rgb(51, 51, 51);">.</span></p><p><span style="color: rgb(51, 51, 51);">规定每次只能选相邻的两堆合并成新的一堆</span><span style="color: rgb(51, 51, 51);">,</span><span style="color: rgb(51, 51, 51);">并将新的一堆的石子数记为该次合并的得分</span><span style="color: rgb(51, 51, 51);">.</span></p><p><span style="color: rgb(51, 51, 51);">请你帮助小</span><span style="color: rgb(51, 51, 51);">H</span><span style="color: rgb(51, 51, 51);">计算这个游戏的最小得分和最大得分</span><span style="color: rgb(51, 51, 51);">.</span></p>

## 输入

<p><span style="color: rgb(51, 51, 51);">数据的第</span><span style="color: rgb(51, 51, 51);">1</span><span style="color: rgb(51, 51, 51);">行是正整数</span><span style="color: rgb(51, 51, 51);">N(1&lt;=N&lt;=100),</span><span style="color: rgb(51, 51, 51);">表示有</span><span style="color: rgb(51, 51, 51);">N</span><span style="color: rgb(51, 51, 51);">堆石子</span><span style="color: rgb(51, 51, 51);">.</span></p><p><span style="color: rgb(51, 51, 51);">第</span><span style="color: rgb(51, 51, 51);">2</span><span style="color: rgb(51, 51, 51);">行有</span><span style="color: rgb(51, 51, 51);">N</span><span style="color: rgb(51, 51, 51);">个整数</span><span style="color: rgb(51, 51, 51);">.</span><span style="color: rgb(51, 51, 51);">第</span><span style="color: rgb(51, 51, 51);">i</span><span style="color: rgb(51, 51, 51);">个整数</span><span style="color: rgb(51, 51, 51);">ai(1&lt;=ai&lt;=10)​</span><span style="color: rgb(51, 51, 51);">表示第</span><span style="color: rgb(51, 51, 51);">i</span><span style="color: rgb(51, 51, 51);">堆石子的个数</span><span style="color: rgb(51, 51, 51);">.</span></p>

## 输出

<p>输出共<span style="color: rgba(0, 0, 0, 0.75);">2</span><span style="color: rgba(0, 0, 0, 0.75);">行</span>,第<span style="color: rgba(0, 0, 0, 0.75);">1</span><span style="color: rgba(0, 0, 0, 0.75);">行为最小得分</span>,第<span style="color: rgba(0, 0, 0, 0.75);">2</span><span style="color: rgba(0, 0, 0, 0.75);">行为最大得分</span>.<br /></p>

## 样例

### 输入1

```
4
4 5 9 4

```

### 输出1

```
43
54

```

