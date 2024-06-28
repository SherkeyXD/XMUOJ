# 多重背包问题(1)

| 题目链接 | [多重背包问题(1)](http://xmuoj.com/problem/ACW004) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p style="margin-left: 0px;"><img alt="image.png" src="/public/upload/f54a4768cf.png" width="600" height="322.2488038277512" /><br /></p><p style="margin-left: 0px;">有N种物品和一个容量是V的背包。</p><p>第i种物品最多有si件，每件体积是vi，价值是wi。</p><p>求解将哪些物品装入背包，可使物品体积总和不超过背包容量，且价值总和最大。<br />输出最大价值。</p><h4><span style="color: rgb(227, 55, 55);">数据范围</span></h4><p><span style="color: rgb(227, 55, 55);">0&lt;N,V≤100<br />0&lt;vi,wi,si≤100</span></p>

## 输入

<p>第一行两个整数，N，V，用空格隔开，分别表示物品种数和背包容积。</p><p>接下来有N行，每行三个整数vi,wi,si，用空格隔开，分别表示第i种物品的体积、价值和数量。</p>

## 输出

<p><span style="color: rgb(51, 51, 51);">输出一个整数，表示最大价值。</span><br /></p>

## 样例

### 输入1

```
4 5
1 2 3
2 4 1
3 4 3
4 5 2
```

### 输出1

```
10
```

## 提示

<p><a href="https://www.acwing.com/problem/content/4/" target="_blank">原题链接</a><br /></p>

## 来源

xmu

