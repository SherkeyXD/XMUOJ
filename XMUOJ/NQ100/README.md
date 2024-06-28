# 滚石柱

| 题目链接 | [滚石柱](http://xmuoj.com/problem/NQ100) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p>驾驭着林克的新身份，在编程之息大陆里闯荡，不知不觉小鲁的水平进入到全新的阶段了。</p><p>突然，小华的全新投影显现在小鲁面前，他满意地看着自己的得意门生林克小鲁，喜上眉梢。</p><p>“祝贺你，林克(小鲁),如今你来到了最后一个试炼，这个试炼你需要综合运用你过去所掌握的知识，方能解决”。</p><p>小鲁摘下林克头盔，深深的向小华鞠了一个躬：</p><p>”滴水之恩当涌泉想报，如今这最后一题，我愿意以真实的身份来挑战，林克毕竟只是VR的数字人，并非真人。这最后一战，学生小鲁愿意挑战。“</p><p>小华欣慰的点点头，介绍最后一题，3D的迷宫类问题——<a href="https://www.albinoblacksheep.com/games/bloxorz" target="_blank">滚石柱</a>。</p><p><img alt="image.png" src="http://www.xmuoj.com/public/upload/2f88248417.png" width="689" height="271" /><br /></p><p>这个游戏的任务是滚动一个1×1×2的长方体石柱，把它滚动到目的地。</p><p>石柱在地面上有3种放置形式，“立”在地面上（1×1的面接触地面）横“躺”或者竖“趟”在地面上（1×2的面接触地面）</p><p><img alt="image.png" src="http://www.xmuoj.com/public/upload/283bd916f0.png" width="768" height="191" /><br /></p><p><img alt="image.png" src="http://www.xmuoj.com/public/upload/2e32f16d7c.png" width="760" height="218" /><br /></p><p>迷宫是一个N行M列的矩阵，每个位置可能是硬地（用”.”表示）、易碎地面（用”E”表示）、禁地（用”#”表示）、起点（用”X”表示）或终点（用”O”表示）。</p><p>在每一步操作中，可以按上下左右四个键之一。</p><p>按下按键之后，石柱向对应的方向沿着棱滚动90度。</p><p>任意时刻，长方体不能有任何部位接触禁地，并且不能立在易碎地面上。</p><p>字符”X”标识长方体的起始位置，地图上可能有一个”X”或者两个相邻的”X”。</p><p>地图上唯一的一个字符”O”标识目标位置。</p><p>求把石柱移动到目标位置（即立在”O”上）所需要的最少步数。</p><p>在移动过程中，”X”和”O”标识的位置都可以看作是硬地被利用。</p>

## 输入

<p style="margin-left: 0px;">输入包含多组测试用例。</p><p>对于每个测试用例，第一行包括两个整数N和M。</p><p>接下来N行用来描述地图，每行包括M个字符，每个字符表示一块地面的具体状态。</p><p>当输入用例N=0，M=0时，表示输入终止，且该用例无需考虑。</p><h4><span style="color: rgb(227, 55, 55);">数据范围</span></h4><p>3≤N,M≤500</p>

## 输出

<p style="margin-left: 0px;">每个用例输出一个整数表示所需的最少步数，如果无解则输出”Impossible”。</p><p>每个结果占一行。</p>

## 样例

### 输入1

```
7 7
#######
#..X###
#..##O#
#....E#
#....E#
#.....#
#######
0 0
```

### 输出1

```
10
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1oK411V7GF" target="_blank">Andy讲解</a><br /></p><p><a href="https://www.acwing.com/problem/content/video/174/" target="_blank">ACWing讲解</a></p><p><span style="color: rgb(51, 51, 51);">《算法竞赛进阶指南》</span><br /></p>

