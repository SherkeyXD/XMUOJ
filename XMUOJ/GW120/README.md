# 汉诺塔II

| 题目链接 | [汉诺塔II](http://xmuoj.com/problem/GW120) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p><img alt="image.png" src="/public/upload/8c61c1f7d1.png" width="376" height="216" /><br /></p><p>有三根杆子A，B，C。A杆上有N个(N&gt;1)穿孔圆盘，盘的尺寸由下到上依次变小。要求按下列规则将所有圆盘移至C杆： 每次只能移动一个圆盘； 大盘不能叠在小盘上面。 提示：可将圆盘临时置于B杆，也可将从A杆移出的圆盘重新移回A杆，但都必须遵循上述两条规则。<br /></p><p>问：如何移？最少要移动多少次？</p>

## 输入

<p><span style="color: rgb(35, 31, 23);">输入为一个整数后面跟三个单字符字符串。</span></p><p><span style="color: rgb(35, 31, 23);">整数为盘子的数目，后三个字符表示三个杆子的编号。</span></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">输出每一步移动盘子的记录。一次移动一行。</span></p><p><span style="color: rgb(35, 31, 23);">每次移动的记录为例如3:a-&gt;b 的形式，即把编号为3的盘子从a杆移至b杆。</span></p><p><span style="color: rgb(35, 31, 23);">我们约定圆盘从小到大编号为1, 2, ...n。即最上面那个最小的圆盘编号为1，最下面最大的圆盘编号为n。</span></p>

## 样例

### 输入1

```
3 a b c
```

### 输出1

```
1:a->c
2:a->b
1:c->b
3:a->c
1:b->a
2:b->c
1:a->c
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1qy4y187N1" target="_blank">Andy讲解(2021)</a><br /></p>

