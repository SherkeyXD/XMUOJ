# 公主的攻击范围

| 题目链接 | [公主的攻击范围](http://xmuoj.com/problem/XMU024) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p><img alt="image.png" src="/public/upload/fc4f8b3e16.png" width="844" height="401" /><br /></p><p>塞尔达公主瘦弱的身体里面蕴含着不可思议的神圣力量，这个力量从公主所在的位置释放，可以逐层扩散到加农污秽掌控的区域。</p><p>给定一个N行M列的区域，代号为1的区域是公主能力释放的初始区，代号为0的区域表示需要洁净的区域。</p><p>每经过1毫秒，公主的神圣之光向外扩散一格，洁净相邻区域（4个方向），请计算每个标记为0的区域中加农的势力最多还能得瑟几毫秒。</p><p><img alt="image.png" src="/public/upload/247c7d8854.png" width="962" height="401" /><br /></p><p>格子与格子之间的距离使用曼哈顿距离计算。</p><p>提示：<br /></p><p><img alt="image.png" src="/public/upload/896fdea9e0.png" width="721" height="185" /><br /></p><p><span style="color: rgb(51, 51, 51);">根据如上公式可知：<span style="color: rgb(51, 51, 51);">曼哈顿距离指</span>两点之间的行坐标i距离和列坐标j距离之和。</span><br /></p><p>题目的意思就是求出矩阵中所有节点为0的点，到节点为1的点的曼哈顿距离。</p>

## 输入

<p>第一行两个整数n,m。</p><p>接下来一个N行M列的01矩阵，数字之间没有空格。</p><h4>数据范围</h4><p>1≤N,M≤1000</p>

## 输出

<p><span style="color: rgb(51, 51, 51);">一个N行M列的矩阵B，相邻两个整数之间用一个空格隔开。每个整数表示加农势力存在的毫秒数（最小<span style="color: rgb(51, 51, 51);">曼哈顿距离值）</span></span><br /></p>

## 样例

### 输入1

```
3 4
0001
0011
0110
```

### 输出1

```
3 2 1 0
2 1 0 0
1 0 0 1
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1Rk4y1r7dH" target="_blank">Andy的讲解</a><br /></p><p><a href="https://www.acwing.com/problem/content/video/175/" target="_blank">ACWing讲解</a></p>

## 来源

xmu

