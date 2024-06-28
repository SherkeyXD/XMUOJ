# 寻找林克的回忆(3)

| 题目链接 | [寻找林克的回忆(3)](http://xmuoj.com/problem/NQ098) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 2000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p><img src="https://tse4-mm.cn.bing.net/th?id=OIP.RSKuXL8d4jPQ3CHnZ5Z3jQHaEo&pid=Api&rs=1" alt="See the source image" /><br /></p><p>为了寻回百年前与公主一起的记忆碎片，林克历尽千辛万苦总算破解了数独试炼I和II的谜题，寻回50%的记忆碎片。<br /></p><p>如今，摆在他面前是数独试炼III——传说中的靶形数独（通过后可以获得剩下的30%的记忆碎片)。</p><p>靶形数独的方格同普通数独一样，在9×9的大九宫格中有9个3×3的小九宫格（用粗黑色线隔开的）。</p><p>在这个大九宫格中，有一些数字是已知的，根据这些数字，利用逻辑推理，在其他的空格上填入1到9的数字。</p><p>每个数字在每个小九宫格内不能重复出现，每个数字在每行、每列也不能重复出现。</p><p>但靶形数独有一点和普通数独不同，即每一个方格都有一个分值，而且如同一个靶子一样，离中心越近则分值越高（如下图所示）。</p><p><img src="https://www.acwing.com/media/article/image/2019/01/17/19_1add32be19-%E9%9D%B6%E5%AD%90.jpe.jpg" alt="靶子.jpe.jpg" /><br /></p><p><span style="color: rgb(51, 51, 51);">上图具体的分值分布是：</span></p><p style="margin-left: 40px;"><span style="color: rgb(51, 51, 51);">最里面一格（黄色区域）为10分<br /></span>黄色区域外面的一圈（红色区域）每个格子为9分<br />再外面一圈（蓝色区域）每个格子为8分<br />蓝色区域外面一圈（棕色区域）每个格子为7分<br />最外面一圈（白色区域）每个格子为6 分</p><p>每个人必须完成一个给定的数独（每个给定数独可能有不同的填法），而且要争取更高的总分数。</p><p>而这个总分数即每个方格上的分值和完成这个数独时填在相应格上的数字的乘积的总和。</p><p>如图，在以下的这个已经填完数字的靶形数独游戏中，总分数为2829。</p><p>游戏规定，将以总分数的高低决出胜负。</p><p><img src="https://www.acwing.com/media/article/image/2019/01/17/19_55aa03a419-%E9%9D%B6%E5%AD%902.jpe.jpg" alt="靶子2.jpe.jpg" /><br /></p><p><span style="color: rgb(51, 51, 51);">求对于给定的靶形数独，能够得到的最高分数。</span><br /></p>

## 输入

<p>输入一共包含9行。</p><p>每行 9 个整数（每个数都在 0—9 的范围内），表示一个尚未填满的数独方格，未填的空格用“0”表示。</p><p>每两个数字之间用一个空格隔开。</p>

## 输出

<p>输出可以得到的靶形数独的最高分数。</p><p>如果这个数独无解，则输出整数-1。</p>

## 样例

### 输入1

```
7 0 0 9 0 0 0 0 1 
1 0 0 0 0 5 9 0 0 
0 0 0 2 0 0 0 8 0 
0 0 5 0 2 0 0 0 3 
0 0 0 0 0 0 6 4 8 
4 1 3 0 0 0 0 0 0 
0 0 7 0 0 2 0 9 0 
2 0 1 0 6 0 8 0 4 
0 8 0 5 0 4 0 1 2 
```

### 输出1

```
2829
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/bv1Qb4y1D7hY" target="_blank">Andy(2021)</a></p><p><a href="https://www.bilibili.com/video/BV1mA411b7hB" target="_blank">Andy(2020)</a></p><p><a href="https://www.acwing.com/video/272/" target="_blank">ACWing的讲解</a></p>

