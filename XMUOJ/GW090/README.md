# 海拉鲁城堡问题

| 题目链接 | [海拉鲁城堡问题](http://xmuoj.com/problem/GW090) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><img alt="image.png" src="/public/upload/9209e3f533.png" width="429" height="315" /><br /></p><pre><br />     1   2   3   4   5   6   7  <br />   #############################<br /> 1 #   |   #   |   #   |   |   #<br />   #####---#####---#---#####---#<br /> 2 #   #   |   #   #   #   #   #<br />   #---#####---#####---#####---#<br /> 3 #   |   |   #   #   #   #   #<br />   #---#########---#####---#---#<br /> 4 #   #   |   |   |   |   #   #<br />   #############################<br />           (图 1)<br /><br />   #  = Wall   <br />   |  = No wall<br />   -  = No wall<br /></pre><p><span style="color: rgb(35, 31, 23);">图1是海拉鲁城堡的地形图。请你编写一个程序，计算该城堡一共有多少房间，最大的房间有多大。</span></p><p><span style="color: rgb(35, 31, 23);">城堡被分割成m×n(m≤50，n≤50)个方块，每个方块可以有0~4面墙。</span></p>

## 输入

<p style="margin-left: 0px;"><span style="color: rgb(35, 31, 23);">前两行是两个整数，分别是南北向、东西向的方块数（行和列）。</span></p><p><span style="color: rgb(35, 31, 23);">在接下来的输入行里，每个方块用一个数字p表示(0≤p≤50)。其</span><span style="color: rgb(35, 31, 23);">二进制位为1代表有墙，为0代表无墙。</span></p><p><span style="color: rgb(35, 31, 23);">四面墙由整数P的后四位表示。最低位代表西墙(0001)，第二位代表北墙(0010)，第三位4表示东墙(0100)，第四位表示南墙(1000)。</span></p><p><span style="color: rgb(35, 31, 23);">四个数相加的和就是每个方块的四面墙的状态。</span></p><p><span style="color: rgb(35, 31, 23);">输入数据中每个方块的内墙是重叠的，方块(1,1)的南墙同时也是方块(2,1)的北墙。</span></p><p><span style="color: rgb(35, 31, 23);">输入的数据保证城堡至少有两个房间。</span></p>

## 输出

<p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">海拉鲁</span>城堡的房间数、<span style="color: rgb(35, 31, 23);">海拉鲁</span>城堡中最大房间所包括的方块数。</span></p><p><span style="color: rgb(35, 31, 23);">结果显示在标准输出设备上。</span><br /></p>

## 样例

### 输入1

```
4 
7 
11 6 11 6 3 10 6 
7 9 6 13 5 15 5 
1 10 12 7 13 7 5 
13 11 10 8 10 12 13 
```

### 输出1

```
5
9
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1UB4y1w75q" target="_blank">Andy(2021)</a><br /></p><p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1Zb411q7iY?p=38" target="_blank">Guowei讲解</a></p><p><a href="https://www.bilibili.com/video/BV16K41177Ma" target="_blank">Andy(2020)</a></p><p>感谢witcano提供测试数据</p><p><a href="https://www.bilibili.com/video/BV1WV411f7y3" target="_blank">数据结构：图的表示</a></p>

## 来源

xmu

