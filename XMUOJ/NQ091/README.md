# 骑士林克的怜悯(1)

| 题目链接 | [骑士林克的怜悯(1)](http://xmuoj.com/problem/NQ091) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><b></b></p><p><b><img alt="image.png" src="/public/upload/b6774f404c.png" width="476" height="297" /></b></p><p>林克驰骋在海拉鲁大陆的平原上无比自由，他想起二维空间中的国际象棋同伴，回想起自己也活在2D世代的局限，心生怜悯。</p><p>那些骑士，永远被局限在8×8的棋盘之内厮杀，他们的世界永不改变。因此，林克去到阿卡来研究所寻求帮助，他得到新的道具——变形棋盘。</p><p>这个变形棋盘可以根据输入的两个参数的（p,q）创造全新的棋盘空间。</p><p>如下图分别是<span style="color: rgb(51, 51, 51);">（p,q）为</span>(3,9) , (6,3) ,以及(5,5)的棋盘空间。</p><p><b><img alt="image.png" src="/public/upload/1535dce661.png" width="362" height="121" />--<img alt="image.png" src="/public/upload/9a40274901.png" width="121" height="244" />--<img alt="image.png" src="/public/upload/33abb03385.png" width="202" height="202" /><br /></b></p><p>假设2D世界的骑士，移动的方式按字母次序有如下8种：</p><p><img alt="image.png" src="/public/upload/348369f95a.png" width="286" height="273" /><br /></p><p><font>请问对于每一种棋盘<span style="color: rgb(51, 51, 51);">（p,q）</span>，2D骑士是否有一种一次遍历所有棋盘方格的路线？</font></p><p><font>如果有，请输出这条路线（若有多条路线，请输出字典序最小的路线）。</font></p><p><font>如果没有，请输出无。</font></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">输入数据第一行为正整数n，代表有多少组输入样例</span></p><p><span style="color: rgb(35, 31, 23);">接下来n行是两个整数代表行p和列q, 代表变形棋盘的行列参数，其中（1 &lt;= p * q &lt;= 26）。</span><br /></p>

## 输出

<p>每个样例的输出2行，格式如下：</p><p style="margin-left: 40px;">&quot;#i:&quot; 其中i代表第i种棋盘</p><p style="margin-left: 40px;">骑士跳过的每个格子（<span style="color: rgb(51, 51, 51);">每个访问的格子用大写字母加数字表示），一条可行的路径输出如</span>(A1B3C1A2B4C2A3B1C3A4B2C4)，</p><p>如果没有可行方案，则第二行输出：none</p>

## 样例

### 输入1

```
5
5 1
5 2
5 3
5 4
5 5
```

### 输出1

```
#1:
none
#2:
none
#3:
none
#4:
A1B3A5C4D2B1A3B5D4C2B4A2C1D3C5A4B2D1C3D5
#5:
A1B3A5C4A3B1D2E4C5A4B2D1C3B5D4E2C1A2B4D5E3C2E1D3E5
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1BK411F7ns" target="_blank">Andy(2021)</a></p><p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1uK411j7S5" target="_blank">Andy(2020)</a></p>

## 来源

xmu

