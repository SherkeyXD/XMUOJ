# 波克布林的巡逻范围

| 题目链接 | [波克布林的巡逻范围](http://xmuoj.com/problem/XMU019) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p style="margin-left: 0px;"><img alt="image.png" src="/public/upload/6fd3a750d3.png" width="554" height="227" /><br /></p><p style="margin-left: 0px;">有一个m行和n列的方阵区域(m＊n)，横纵坐标范围分别是0∼m−1和0∼n−1。</p><p>一只红色的波克布林从坐标0,0的格子开始巡逻，每一次只能向左，右，上，下四个方向移动一格。</p><p>但是不能进入行坐标和列坐标的数位之和大于k的格子。</p><p>请问该<span style="color: rgb(51, 51, 51);">红色</span><span style="color: rgb(51, 51, 51);">波克布林</span>能够达到多少个格子？</p><p>假如输入：k=18, m=40, n=40</p><p><span style="color: rgb(51, 51, 51);">则输出是：1484</span></p><p><span style="color: rgb(51, 51, 51);">根据题意思：当k为18时，<span style="color: rgb(51, 51, 51);">波克布林</span>能够进入方格（35,37），因为3+5+3+7 = 18。      但是，它不能进入方格（35,38），因为3+5+3+8 = 19。</span><br /></p>

## 输入

<p>输入一行，三个整数，由空格隔开，代表k m n</p><p>其中：</p><p><span style="color: rgb(51, 51, 51);">0&lt;=k&lt;=100</span><br /></p><p>0&lt;=m&lt;=50</p><p>0&lt;=n&lt;=50</p>

## 输出

<p>一个整数，表示红色<span style="color: rgb(51, 51, 51);">波克布林能达到的多少格子。</span></p><p><code><br /></code><code><br /></code></p>

## 样例

### 输入1

```
18 40 40
```

### 输出1

```
1484
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1Lg4y1z73k" target="_blank">Andy的讲解</a><br /></p><p><a href="https://www.acwing.com/video/148/" target="_blank">ACWing讲解</a></p><p>《来源：剑指Offer》</p>

## 来源

xmu

