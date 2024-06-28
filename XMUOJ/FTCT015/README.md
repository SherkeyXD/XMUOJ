# 山水厦大

| 题目链接 | [山水厦大](http://xmuoj.com/problem/FTCT015) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p><span style="color: rgb(73, 80, 96);">厦门大学依山傍水，一共有情人谷、芙蓉隧道、芙蓉湖</span><span style="color: rgb(73, 80, 96);">…</span><span style="color: rgb(73, 80, 96);">等</span><span style="color: rgb(73, 80, 96);">N</span><span style="color: rgb(73, 80, 96);">个可游玩的景点，并且两两之间都有一条通路。</span></p><p><span style="color: rgb(73, 80, 96);">由于访客数量太多，游玩途中常常出现拥堵，所以在节假日期间每段路限制游客只能通行一次。</span></p><p><span style="color: rgb(73, 80, 96);">假期你的朋友来厦大游玩，你要如何规划路线，帮他以最短路线访问所有景点呢？</span><b><br /></b></p><p><span style="color: rgb(73, 80, 96);"><br /></span></p><p>出题者：邱梦薇同学</p>

## 输入

<p><span style="color: rgb(73, 80, 96);">第一行是一个整数</span><span style="color: rgb(73, 80, 96);">n(1&lt;=n&lt;=8),</span><span style="color: rgb(73, 80, 96);">表示景点的个数，景点编号从</span><span style="color: rgb(73, 80, 96);">0</span><span style="color: rgb(73, 80, 96);">开始。</span></p><p><span style="color: rgb(73, 80, 96);">接下来是一个</span><span style="color: rgb(73, 80, 96);">n*n</span><span style="color: rgb(73, 80, 96);">的对称矩阵</span><span style="color: rgb(73, 80, 96);">,</span><span style="color: rgb(73, 80, 96);">元素</span><span style="color: rgb(73, 80, 96);">dis[i,j]</span><span style="color: rgb(73, 80, 96);">表示景点</span><span style="color: rgb(73, 80, 96);">i</span><span style="color: rgb(73, 80, 96);">与景点</span><span style="color: rgb(73, 80, 96);">j</span><span style="color: rgb(73, 80, 96);">之间道路的长度</span><span style="color: rgb(73, 80, 96);">(1&lt;=dis[i,j]&lt;=10000,</span><span style="color: rgb(51, 51, 51);">dis[i,i]=0,dis[i,j]=dis[j,i]</span><span style="color: rgb(73, 80, 96);">)</span></p>

## 输出

<p><span style="color: rgb(73, 80, 96);">输出最短路线的长度</span><b></b><br /></p>

## 样例

### 输入1

```
5
0 2 4 5 1
2 0 6 5 3
4 6 0 8 3
5 5 8 0 5
1 3 3 5 0
```

### 输出1

```
18
```

## 提示

<p><span style="color: rgb(73, 80, 96);">n很小,可以考虑回溯或分支限界，当然也可以动态规划</span><br /></p>

