# 净化迷雾森林

| 题目链接 | [净化迷雾森林](http://xmuoj.com/problem/GW129) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);"><img alt="image.png" src="/public/upload/3ec4db1361.png" width="539" height="303" /><br /></span></span></p><p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">迷雾森林被加农的玷污了，原本圣洁无比的迷雾森林，如今被彻底玷污，空气中充满着紫色的恶臭。</span></span></p><p><font>林克临危不惧，带上呼吸面罩，挥舞大师之剑的光芒，净化迷雾。林克所到之处，加农褪去，圣洁回归。</font></p><p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">如下图，红色代表墙壁，紫色的迷雾代表需要净化的空间，金色代表林克开始净化的起点。</span></span></span></p><p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">从某处开始，林克只能向</span>相邻的紫色区域移动。请问，林克总共能够净化多少区域？</span><br /></span></p><p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">图1 初始状态                                                                图2   净化中.....</span><br /></span></span></p><p><span style="color: rgb(35, 31, 23);"><img alt="image.png" src="/public/upload/f48cf16664.png" width="311" height="464" />-----<img alt="image.png" src="/public/upload/d72a7d4360.png" width="313" height="461" /><br /></span></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">包括多个数据集合。每个数据集合的第一行是两个整数W和H，分别表示x方向和y方向瓷砖的数量。W和H都不超过20。</span></p><p><span style="color: rgb(35, 31, 23);">在接下来的H行中，每行包括W个字符。</span></p><p><span style="color: rgb(35, 31, 23);">每个字符表示一个区域的状态，规则如下</span></p><p><span style="color: rgb(35, 31, 23);">1）</span><span style="color: rgb(227, 55, 55);">‘.’</span><span style="color: rgb(35, 31, 23);">：代表紫色迷雾<img alt="image.png" src="/public/upload/668de4a15e.png" width="42" height="41" />；</span></p><p><span style="color: rgb(35, 31, 23);">2）</span><span style="color: rgb(227, 55, 55);">‘#’</span><span style="color: rgb(35, 31, 23);">：代表红墙<img alt="image.png" src="/public/upload/65762c10c1.png" width="41" height="40" />；</span></p><p><span style="color: rgb(35, 31, 23);">3）‘@’：代表<span style="color: rgb(35, 31, 23);">林克的起始位置</span><img alt="image.png" src="/public/upload/bb1c64a143.png" width="43" height="40" />(该字符在每个数据集合中唯一出现一次。）</span></p><p><span style="color: rgb(35, 31, 23);">当在一行中读入的是两个零时，表示输入结束。</span></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">对每个数据集合，分别输出一行，显示林克从初始位置出发能净化的迷雾数(记数时包括初始位置的迷雾)。</span><br /></p>

## 样例

### 输入1

```
6 9 
....#. 
.....# 
...... 
...... 
...... 
...... 
...... 
#@...# 
.#..#. 
0 0
```

### 输出1

```
45
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1r64y1v7ot?pop_share=1" target="_blank">Andy(2021)</a></p><p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV13T4y1G7HP" target="_blank">Andy(2020)</a></p><p>（改编自《<a href="http://cxsjsxmooc.openjudge.cn/2020t2springall/018/" target="_blank">红与黑</a>》）</p>

## 来源

xmu

