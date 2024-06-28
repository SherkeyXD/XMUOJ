# 四数之和

| 题目链接 | [四数之和](http://xmuoj.com/problem/NQ060) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 50000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p>当小鲁AC了第二问，小华接着提出第三问：<br /></p><p>给定一个目标值 target，请在整数数组 A中，找出四个元素(a,b,c,d) 使a+b+c+d==target。<br /></p><p>请找到所有满足条件的四元组，并且请按从小到大的顺序输出所有合法的四元组。</p><p>注意：四元组中不允许包含重复数字，且输出的四元组中要求 a&lt;b&lt;c&lt;d</p><p><span style="color: rgb(227, 55, 55);">例如:给定target = 17，n=7, 数组a= [0, 2, 5, 10, 15,18,25]</span></p><p><span style="color: rgb(227, 55, 55);">结果返回两个四元组：(0,2,5,10)</span></p>

## 输入

<p>输入数据为2行，第一行有两个整数 target和n，其中target代表要搜索的目标和，n表示数组A的元素个数</p><p>第二行表示数组A的n个数，每个元素用空格隔开。</p>

## 输出

<p>输出所有满足和为target的四元组<span style="color: rgb(51, 51, 51);">(a,b,c,d) 使(a&lt;b&lt;c&lt;d)</span>并且不允许有重复数字。<br /></p><p>把四元组按照a的大小升序输出，a相同的按照b的大小升序输出,<span style="color: rgb(51, 51, 51);">a,b相同的按照c的大小升序输出</span>。</p>

## 样例

### 输入1

```
17 7
0 2 5 10 15 18 25 
```

### 输出1

```
0 2 5 10
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1nV411Y7wF/" target="_blank">Andy讲解(2021)</a><br /></p>

