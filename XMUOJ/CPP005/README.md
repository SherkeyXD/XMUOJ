# 标识符

| 题目链接 | [标识符](http://xmuoj.com/problem/CPP005) |
| --- | --- |
| 可用语言 | C, C++ |
| 时间限制 | 1000 MS |
| 内存限制 | 128 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p>在计算机高级语言中，用来对变量、符号变量名、函数、数组、类型等命名的有效字符序列统称为标识符 (identifier)</p><p>输入若干个标识符，请你依次判断这些标识符在C语言中是否合法</p><p>本题仅考虑标识符组成字符的限制，<strong>不考虑标识符和其他标识符、C语言关键字的重复</strong></p>

## 输入

<p>输入第一行为一个整数   $n$    $(1 \leq n \leq 100)$ ，代表标识符的数量</p><p>接下来的   $n$   行，每行一个由符号、英文字母、数字组成的字符串  $s$   $(1 \leq |s| \leq 100)$ ，代表一个标识符</p>

## 输出

<p>输出  $n$  行，表示每个标识符的判断结果</p><p>如果标识符合法输出<strong>&quot;Great&quot;</strong>，如果不合法输出<strong>&quot;Bad&quot;</strong>（均不包含引号）</p>

## 样例

### 输入1

```
5
hello_world
int
printf
*
hello_world
```

### 输出1

```
Great
Great
Great
Bad
Great
```

## 提示

<p>推荐使用<code>scanf</code>读入字符串</p>

