# 加农的入侵

| 题目链接 | [加农的入侵](http://xmuoj.com/problem/XMU022) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><img alt="OIP (2).jpg" src="/public/upload/38df660829.jpg" width="474" height="266" /><br /></p><p>加农是罪的化身，所到之处污秽遍地。原先富丽堂皇的海鲁拉城堡也被加农污秽了。</p><p>根据调查，加农污秽一片地区有如下规律：</p><p>下图是一个矩形区域，Y=3,<span style="color: rgb(51, 51, 51);">X=4。</span><br /></p><p><img alt="image.png" src="/public/upload/258c8317af.png" width="81" height="103" /><br /></p><p><span style="color: rgb(51, 51, 51);">&quot;.&quot;表示干净区域，而&quot;*&quot;表示障碍物。</span><br /></p><p><span style="color: rgb(51, 51, 51);">如果加农一开始在左下角(1,1），那么加农将会以如下态势污染区域：<br /></span></p><p><span style="color: rgb(51, 51, 51);"><img alt="image.png" src="/public/upload/ecfaa33929.png" width="494" height="124" /><br /></span></p><p>加农将在4天后污染整个区域。</p><p>设区域为矩形Y×X（1&lt;=Y,X&lt;=100），假设加农从(Mx,My)开始扩散，请问经过几天，加农会完全占据这个区域呢？</p>

## 输入

<p>* 第一行: 四个由空格隔开的整数: X, Y, Mx, My</p><p>* 第2到第Y+1行:<span style="color: rgb(51, 51, 51);">每行包含一个由X个字符（<span style="color: rgb(51, 51, 51);">&quot;.&quot;表示干净区域，而&quot;*&quot;表示障碍物。</span>）构成的字符串，共同描绘了草地的完整地图。</span></p><p><span style="color: rgb(51, 51, 51);">(1≤X,Y≤100)</span><br /></p>

## 输出

<p><span style="color: rgb(51, 51, 51);">输出一个整数，表示加农完全占领该区域所需要的天数。</span><br /></p>

## 样例

### 输入1

```
4 3 1 1
....
..*.
.**.
```

### 输出1

```
4
```

### 输入2

```
10 10 7 5
*.........
..........
........*.
..........
.........*
..........
..........
..........
..*.......
..........

```

### 输出2

```
6
```

## 提示

<p><a href="https://www.bilibili.com/video/bv1Li4y1t7Av" target="_blank">Andy的讲解</a></p>

## 来源

xmu

