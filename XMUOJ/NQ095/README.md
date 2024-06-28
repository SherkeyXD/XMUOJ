# 真假记忆碎片

| 题目链接 | [真假记忆碎片](http://xmuoj.com/problem/NQ095) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p style="margin-left: 0px;"><img src="https://pic2.zhimg.com/80/v2-2b8f66b224724de6cfea455f22d5f3c1_720w.jpg" width="400" height="210.5017502917153" /><br /></p><p style="margin-left: 0px;">在千辛万苦得到一个记忆碎片之后，林克需要辨别真假，若是所得到的并不是发生历史中的碎片，乃是后人捏着的，那么林克如何寻回完整的自己呢？</p><p style="margin-left: 0px;">已知林克找到的记忆碎片9×9矩阵是初始矩阵A的解法，也就是记忆碎片A。空白的部分在初始矩阵中用0表示。</p><p><img src="https://cdn.acwing.com/media/article/image/2019/04/18/19_165f3c0a61-1.png" alt="1.png" width="200" height="200" /><img src="https://cdn.acwing.com/media/article/image/2019/04/18/19_18efab2661-2.png" alt="2.png" width="200" height="200" /><br /></p><p>（初始矩阵A）<span style="color: rgb(51, 51, 51);">（记忆碎片A）</span></p><p>请写一个算法，判定找到的记忆碎片是否是真的？</p>

## 输入

<p>输入的<span style="color: rgb(51, 51, 51);">记忆碎片A</span>是一个9行9列的数独矩阵。</p><p>每行包含9个数字（均不超过数字为1-9）。</p><p>初始矩阵A：</p><p>530070000</p><p>600195000</p><p>098000060</p><p>800060003</p><p>400803001</p><p>700020006</p><p>060000280</p><p>000419005</p><p>000080079</p>

## 输出

<p>如果输入数据真的是<span style="color: rgb(51, 51, 51);">初始矩阵A</span>的解，输出Yes，否则输出No</p>

## 样例

### 输入1

```
534678912
672195348
198342567
859761423
426853791
713924856
961537284
287419635
345286179
```

### 输出1

```
Yes
```

### 输入2

```
123456789
123456789
123456789
123456789
123456789
123456789
123456789
123456789
123456789

```

### 输出2

```
No
```

### 输入3

```
534678912
672195348
198342567
859761423
42689993791
713924856
961537284
287419635
345286179
```

### 输出3

```
No
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1oU4y1h7hV/" target="_blank">Andy(2021)</a><br /></p>
