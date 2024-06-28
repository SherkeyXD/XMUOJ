# 小a的字符串

| 题目链接 | [小a的字符串](http://xmuoj.com/problem/FTCT-40) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p>小a有一串字符串abca，把他换算成数字为1+2+3+1=7</p><p>但是小b不喜欢太大的数，所以他每次会给a一个数p，</p><p>希望小a能删掉尽可能少的字符让字符串满足小于等于p</p><p>注意：字符串可能被删成空串，同时我们希望尽可能删除字符串靠后的字符（先保证少，然后靠后删）</p><p>即如果string=abccccabc我们要删除c，我们希望尽可能删除靠前的c</p><p><br /></p><p><br /></p><p>出题者为邱鸿磊同学</p>

## 输入

<p>t：样例个数</p><p>接下来2*t行，分别为string和p</p><p>1&lt;=t&lt;=10000</p><p>string&lt;=200000</p><p>1&lt;=p&lt;=5200000</p>

## 输出

<p>输出删掉之后的字符串</p>

## 样例

### 输入1

```
5
abca
2
abca
6
codeforces
1
codeforces
10
codeforces
100
```

### 输出1

```
aa
abc

cdc
codeforces
```

## 提示

<p>贪心算法+桶<br /></p>

