# 算24

| 题目链接 | [算24](http://xmuoj.com/problem/NQ079) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p><span style="color: rgb(35, 31, 23);">熟悉了递归和深度优先搜索，小华知道现在是让小鲁综合运用所学知识的时候了，他让小鲁调整一道经典题：算24.</span></p><p style="margin-left: 40px;"><span style="color: rgb(35, 31, 23);">给出4个小于10个正整数，你可以使用加减乘除4种运算以及括号把这4个数连接起来得到一个表达式。现在的问题是，是否存在一种方式使得得到的表达式的结果等于24。</span></p><p style="margin-left: 40px;"><span style="color: rgb(35, 31, 23);">这里加减乘除以及括号的运算结果和运算的优先级跟我们平常的定义一致（这里的除法定义是实数除法）。</span></p><p style="margin-left: 40px;"><span style="color: rgb(35, 31, 23);">比如，对于5，5，5，1，我们知道5 * (5 – 1 / 5) = 24，因此可以得到24。又比如，对于1，1，4，2，我们怎么都不能得到24。</span></p><p style="margin-left: 40px;"><span style="color: rgb(35, 31, 23);">注意：输入数字的次序可以改变。</span></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">输入数据包括多行，每行给出一组测试数据，包括4个小于10个正整数。最后一组测试数据中包括4个0，表示输入的结束，这组数据不用处理。</span><br /></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">对于每一组测试数据，输出一行，如果可以得到24，输出“YES”；否则，输出“NO”。</span><br /></p>

## 样例

### 输入1

```
5 5 5 1
1 1 4 2
0 0 0 0
```

### 输出1

```
YES
NO
```

## 提示

<p><a href="https://www.bilibili.com/video/BV12E411E7u9" target="_blank">Andy的讲解(2020)</a><br /></p>

