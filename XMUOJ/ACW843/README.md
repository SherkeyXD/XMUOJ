# DFS试炼之n皇后问题

| 题目链接 | [DFS试炼之n皇后问题](http://xmuoj.com/problem/ACW843) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><span style="color: rgb(51, 51, 51);">n-皇后问题是指将 n 个皇后放在 n∗n 的国际象棋棋盘上，使得皇后不能相互攻击到，即任意两个皇后都不能处于同一行、同一列或同一斜线上。</span><br /></p><p><span style="color: rgb(51, 51, 51);"><img alt="image.png" src="/public/upload/d21377e949.png" width="256" height="272" /><br /></span></p><p><span style="color: rgb(227, 55, 55);">数据范围:1&lt;=n&lt;=12</span></p>

## 输入

<p><span style="color: rgb(51, 51, 51);">共一行，包含整数n。</span><br /></p>

## 输出

<p style="margin-left: 0px;">每个解决方案占n行，每行输出一个长度为n的字符串，用来表示完整的棋盘状态。</p><p>其中”.”表示某一个位置的方格状态为空，”Q”表示某一个位置的方格上摆着皇后。</p><p>每个方案输出完成后，输出一个空行。</p><p>输出方案的顺序请根据样例，按照次序从小到大，从左到右输出。</p>

## 样例

### 输入1

```
4
```

### 输出1

```
.Q..
...Q
Q...
..Q.
..Q.
Q...
...Q
.Q..
```

## 提示

<p><a href="https://www.acwing.com/problem/content/845/" target="_blank">原题链接</a></p>

