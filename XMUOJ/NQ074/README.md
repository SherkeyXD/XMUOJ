# 求八皇后的第n种解

| 题目链接 | [求八皇后的第n种解](http://xmuoj.com/problem/NQ074) |
| --- | --- |
| 可用语言 | C, C++ |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p><span style="color: rgb(35, 31, 23);">掌握基本的递归函数也明白如何生成N皇后问题后，在小华的指导下，小鲁决定加大难度，下一步挑战的就是n皇后问题的升级版：</span></p><p style="margin-left: 40px;"><span style="color: rgb(35, 31, 23);">国际象棋中的皇后可以在横、竖、斜线上不限步数地吃掉其他棋子。</span><br /></p><p style="margin-left: 40px;"><span style="color: rgb(35, 31, 23);">八</span><span style="color: rgb(35, 31, 23);">个皇后问题是如何将八个皇后放在棋盘上（有</span><span style="color: rgb(35, 31, 23);">8 * 8</span><span style="color: rgb(35, 31, 23);">个方格），使它们谁也不能被其他皇后吃掉！</span></p><p style="margin-left: 40px;"><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">已经知道八皇后问题一共有92组解，每组解可以用一个字符串表示：</span></span></p><p style="margin-left: 40px;"><span style="color: rgb(35, 31, 23);">对于某个满足要求的</span><span style="color: rgb(35, 31, 23);">八</span><span style="color: rgb(35, 31, 23);">皇后的摆放方法，定义一个皇后串</span><span style="color: rgb(35, 31, 23);">a</span><span style="color: rgb(35, 31, 23);">与之对应，即</span><span style="color: rgb(35, 31, 23);">a=b</span><span style="color: rgb(35, 31, 23);">1</span><span style="color: rgb(35, 31, 23);">b</span><span style="color: rgb(35, 31, 23);">2</span><span style="color: rgb(35, 31, 23);">...b</span><span style="color: rgb(35, 31, 23);">8</span><span style="color: rgb(35, 31, 23);">，其中b</span><span style="color: rgb(35, 31, 23);">i</span><span style="color: rgb(35, 31, 23);">为相应摆法中第i行皇后所处的列数。</span></p><p><span style="color: rgb(35, 31, 23);"><b>题目是：</b></span></p><p><span style="color: rgb(35, 31, 23);">输入一个数n，要求输出八皇后问题的第n个解，也就是第n个皇后字符串。</span></p><p><span style="color: rgb(35, 31, 23);">串的比较是这样的：皇后串x置于皇后串y之前，当且仅当将x视为整数时比y小。</span></p><p></p><p><span style="color: rgb(35, 31, 23);">请你写一个程序，能够根据输入的数n( 1&lt;=n&lt;=92),输出第n个合法的八皇后串。</span></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">第1行是测试数据的组数T，后面跟着T行输入。</span></p><p><span style="color: rgb(35, 31, 23);">每组测试数据<span style="color: rgb(35, 31, 23);">占1行，包含</span>一个正整数n (1 &lt;= n &lt;= 92)</span><br /></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">输出有T行，每行输出对应一个输入。输出应是一个正整数，是第n个八皇后串。</span><br /></p>

## 样例

### 输入1

```
2
1
92
```

### 输出1

```
15863724
84136275
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1X64y1D7fg" target="_blank">Andy的讲解(2021)</a><br /></p>

