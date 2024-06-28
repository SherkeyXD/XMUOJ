# 字符全排列

| 题目链接 | [字符全排列](http://xmuoj.com/problem/GW103) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><span style="color: rgb(35, 31, 23);">给定一个由不同的小写字母组成的字符串，输出这个字符串的所有全排列。</span><br /></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">输入只有一行，是一个由不同的小写字母组成的字符串，已知字符串的长度在2到8之间。</span><br /></p>

## 输出

<p>输出这个字符串的所有排列方式，每行一个排列。要求字母序比较小的排列在前面。字母序如下定义：</p><p>已知S = s1s2...sk, T = t1t2...tk，则S &lt; T 等价于，存在p (1 &lt;= p &lt;= k)，使得<br />s1= t1, s2= t2, ..., sp - 1= tp - 1, sp&lt; tp成立。</p>

## 样例

### 输入1

```
abc
```

### 输出1

```
abc
acb
bac
bca
cab
cba 
```

## 提示

<p><span style="color: rgb(35, 31, 23);">需要对输入的字符串排序！</span><br /></p><p><span style="color: rgb(35, 31, 23);"><a href="https://www.bilibili.com/video/BV1Rf4y1s71T" target="_blank">Andy讲解2021年</a><br /></span></p>

