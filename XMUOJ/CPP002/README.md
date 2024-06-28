# 五子棋裁判

| 题目链接 | [五子棋裁判](http://xmuoj.com/problem/CPP002) |
| --- | --- |
| 可用语言 | C, C++ |
| 时间限制 | 1000 MS |
| 内存限制 | 128 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p>在程序设计实践课上，老师给大家布置下了这样的实验任务：编写一个五子棋应用程序</p><p>胜负判定是五子棋程序最核心的部分。给出当前棋盘的状态，请你完成对五子棋胜负的判定<strong>（仅考虑当前状态，不考虑后续落子）</strong></p><p>规则：在水平、垂直或对角线方向形成5个以上棋子连续的一方获胜</p>

## 输入

<p>输入第一行为一个整数   $t$    $(1 \leq t \leq 100 )$ ，代表一共有   $t$   组输入</p><p>对于每组输入：</p><p>第一行一个整数    $n$     $(1\leq n\leq 20)$ ，代表棋盘的大小为  $n \times  n$ </p><p>之后的    $n$    行，每行包含一个长度为    $n$    的字符串，代表当前棋盘的状态，其中空位用字符<code>.</code>表示，黑棋、白棋分别用字符<code>B</code><code>W</code>表示</p><p>输入保证只会出现胜负未定、黑棋胜利、白棋胜利三种情况（<strong>即最多只会有一方有5连子</strong>）</p>

## 输出

<p>输出  $t$  行 ，分别为每组输入的胜负结果</p><p>若黑棋胜利输出<strong>&quot;Black&quot;</strong>， 若白棋胜利输出<strong>&quot;White&quot;</strong>，若胜负未定则输出<strong>&quot;Not so fast&quot;</strong>（均不包含引号)</p>

## 样例

### 输入1

```
3
5
WWWWW
BBBB.
.....
.....
.....
5
B...W
.B.W.
..B..
.W.B.
W...B
5
.....
.....
.....
.....
.....
```

### 输出1

```
White
Black
Not so fast
```
