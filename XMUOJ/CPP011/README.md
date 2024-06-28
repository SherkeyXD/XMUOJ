# 矩阵扩展

| 题目链接 | [矩阵扩展](http://xmuoj.com/problem/CPP011) |
| --- | --- |
| 可用语言 | C, C++ |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p>通过本课程的学习，我们对矩阵越来越熟悉。</p><p>给定一个<span style="color: rgb(51, 51, 51);"> $m \times n$ </span>的矩阵，拷贝矩阵最外围一层元素，将原矩阵扩展为一个新的矩阵，如下图所示。扩展后的矩阵大小为<span style="color: rgb(51, 51, 51);"> $(m + 2) \times (n + 2)$ </span>。</p><p><img alt="1679137883850.jpg" src="/public/upload/f491defeec.jpg" width="882" height="298" /><br /></p>

## 输入

<p style="margin-left: 0px;">每次输入有<span style="color: rgb(51, 51, 51);"> $m + 1$ </span>行。</p><p style="margin-left: 0px;">第一行为两个整数<span style="color: rgb(51, 51, 51);">  $m$    $(3 \leq m + 2 \leq 30)$  ，</span>  $n$    $(3 \leq n + 2 \leq 30)$  ，分别代表矩阵的行和列。</p><p>之后的   $m$   行，每行有<span style="color: rgb(51, 51, 51);">  $n$   个由空格隔开的整数，每个整数的取值范围为 [-10000, 10000]</span>。</p>

## 输出

<p>每次输出有<span style="color: rgb(51, 51, 51);"> $m + 2$ </span>行，<span style="color: rgb(51, 51, 51);"> $n + 2$  列整数。</span></p>

## 样例

### 输入1

```
3 4
1 2 3 4
5 6 7 8
9 10 11 12
```

### 输出1

```
1 1 2 3 4 4
1 1 2 3 4 4
5 5 6 7 8 8
9 9 10 11 12 12
9 9 10 11 12 12
```

## 提示

<p>输出的每一行末尾没有空格。</p>

