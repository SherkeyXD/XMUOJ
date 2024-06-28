# 林克的命运之阵

| 题目链接 | [林克的命运之阵](http://xmuoj.com/problem/GW091) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><span style="color: rgb(35, 31, 23);"><img alt="image.png" src="/public/upload/6dbec9b26e.png" width="677" height="426" /><br /></span></p><p><span style="color: rgb(35, 31, 23);">每一个人心中都有一个林克。每一个林克都不一样。在命运矩阵里面，随着选择的不同，没有哪一个林克的命运会一模一样。</span></p><p><span style="color: rgb(35, 31, 23);">有一个方格型的命运矩阵，矩阵边界在无穷远处。我们做如下假设：</span></p><p><span style="color: rgb(35, 31, 23);">1. 每一个格子象征林克命运中的一次抉择，每次只能从相邻的方格中做选择。</span></p><p><span style="color: rgb(35, 31, 23);">2. 从某个格子出发，只能从当前方格移动一格，走到某个相邻的方格上；</span></p><p><span style="color: rgb(35, 31, 23);">3.选择一旦做出就不可更改，因此走过的格子无法走第二次。</span></p><p><span style="color: rgb(35, 31, 23);">4. 从命运矩阵的第1行出发，只能向下、左、右三个方向走；</span></p><p><span style="color: rgb(35, 31, 23);">请问：如果最高允许在方格矩阵上走n步（也就是林克一生最多能做n个选择）。<br />那么随着n的不同，请问一共会有多少种不同选择的方案导致多少个不同的林克？<br />注意，2种走法只要有一步不一样，即被认为是不同的方案。</span></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">允许在方格上行走的步数n(n &lt;= 20)</span><br /></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">经过n个选择之后，诞生的不同的林克的个数。</span><br /></p>

## 样例

### 输入1

```
2
```

### 输出1

```
7
```

### 输入2

```
20
```

### 输出2

```
54608393
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1qZ4y1c7nj?pop_share=1" target="_blank">Andy(2021)</a></p><p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1Mz411b7DL" target="_blank">Andy(2020</a>)</p><p>改编自《踩方格》</p>

