# 离心优化2

| 题目链接 | [离心优化2](http://xmuoj.com/problem/FTCT-56) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p><span style="color: rgb(51, 51, 51);">小明在一个生物技术公司工作，负责管理一个具有两个槽位的离心机。</span><span style="color: rgb(51, 51, 51);"></span><span style="color: rgb(51, 51, 51);">实验室有一个装满离心管的离心管架，其中的样品需要被离心处理以完成各种生物实验。</span><span style="color: rgb(51, 51, 51);"></span><span style="color: rgb(51, 51, 51);">某些离心管中的样品已经被污染而无法使用，不会被离心处理。</span><span style="color: rgb(51, 51, 51);"></span><span style="color: rgb(51, 51, 51);">小明希望优化离心过程，使得尽可能多的样品被离心。</span><span style="color: rgb(51, 51, 51);"></span><span style="color: rgb(51, 51, 51);">由于他很懒，因此每次他只会拿出离心管架中相邻的一对离心管放入离心机进行离心，并且最后如果有不成对的单独的离心管剩下，也不会再对其进行离心。</span><br /></p><p>出题者为宋曦轲同学<br /></p>

## 输入

<p>第一行包含两个用一个空格分隔的整数 n 和 m，分别代表离心管架中排列的离心管的行数和列数。</p><p>接下来的 n 行，每行包含 m 个整数，相邻两个整数之间由一个空格分隔， 第i行第j列的元素为a<span style="color: inherit;">ij</span>。<span style="color: inherit;"></span>若a<span style="color: inherit;">ij</span>为1则表明该位置的样品未损坏，若a<span style="color: inherit;">ij</span>为-1则其表示该位置的样品已经损坏。</p>

## 输出

<p><span style="color: rgb(51, 51, 51);">输出共一行，包含一个非负整数，表示可被离心的样品的最大数量。</span><br /></p>

## 样例

### 输入1

```
3 4
1 1 1 -1
1 1 -1 1
-1 1 1 1
```

### 输出1

```
8
```

## 提示

<p><span style="color: rgb(51, 51, 51);">数据范围:</span><span style="color: rgb(51, 51, 51);">1 ≤ n, m ≤ 5;</span><span style="color: rgb(51, 51, 51);">-1 ≤ a</span><span style="color: rgb(51, 51, 51);"><span style="color: inherit;">ij</span></span><span style="color: rgb(51, 51, 51);">≤ 1e5</span><br /></p>

