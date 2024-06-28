# 二进制中1的最低位位置(打表+Lowbit)

| 题目链接 | [二进制中1的最低位位置(打表+Lowbit)](http://xmuoj.com/problem/XMU003) |
| --- | --- |
| 可用语言 | C++ |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><img alt="lowbit.jpg" src="/public/upload/dcbaca3e1e.jpg" width="474" height="296" /><br /></p><p>打表法是寻找回忆不可或缺的重要方法，如果配合上lowbit，那么更难的问题也能迎刃而解。</p><p>请运用打表法和lowbit算法解决如下问题：</p><p>给定一个16位的十进制数，请把该数转换为二进制数来看待。</p><p>请找到该数看为二进制后，其最低位的1出现的位置。</p><p>也就是这个数最低位的1是二进制中的第几位呢？</p>

## 输入

<p>以1开头的二进制数的十进制表示B.</p><p>例如输入9.</p><p><img alt="image.png" src="/public/upload/22827db03d.png" width="391" height="119" /><br /></p>

## 输出

<p>输出K，表示B中的1在第K位（K=0,1,2....15)</p><p>9的最低位的1出现在位置0.</p>

## 样例

### 输入1

```
9

```

### 输出1

```
0
```

### 输入2

```
8
```

### 输出2

```
3
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1dC4y1s7LW" target="_blank">Andy讲解</a></p><p>8 = 2^3 故需要计算以2为底的log(2^3)=3，得到第3位。也就是8的二进制表示中，1出现在第3位。<br /></p><p>用打表法计算Log2。</p>

## 来源

xmu

