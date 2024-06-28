# 寻找林克的回忆(1)

| 题目链接 | [寻找林克的回忆(1)](http://xmuoj.com/problem/NQ096) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p style="margin-left: 0px;"><img alt="image.png" src="/public/upload/5651a11e2c.png" width="676" height="349" /><br /></p><p style="margin-left: 0px;">为了找到百年沉睡的原因，寻回百年前与公主一起的记忆碎片，明白自己是谁，林克必须破解数独谜题。</p><p style="margin-left: 0px;">林克需要在限定时间内，把9×9的数独补充完整，使得图中每行、每列、每个3 × 3的九宫格内数字1~9均恰好出现一次。</p><p style="margin-left: 0px;">林克需要寻回失去的记忆碎片，你，作为林克的朋友，需要帮忙林克寻回9×9棋盘中失去的数字。</p><p style="margin-left: 0px;">或许有一天，林克也能帮助你，寻回关于你是谁，你从哪里来的记忆碎片。</p><p style="margin-left: 0px;">这是数独试炼I（<span style="color: rgb(51, 51, 51);">解密成功可以解锁林克前25%的记忆碎片）</span></p><p><img src="http://media.openjudge.cn/images/2982_1.jpg" /><br /></p>

## 输入

<p><font>输入为9×9的数据。一共9行，每行有9个数字。</font></p><p>数字为0表示对应的数字盘为空。<br /></p>

## 输出

<p><font>对于每个测试用例，程序应以与输入数据相同的格式打印解决方案(9×9)。</font></p><p><font>空单元格必须根据规则进行填充。</font></p><p><font>如果解决方案不是唯一的，则程序可以打印其中任何一种。</font><br /></p>

## 样例

### 输入1

```
103000509
002109400
000704000
300502006
060000050
700803004
000401000
009205800
804000107
```

### 输出1

```
143628579
572139468
986754231
391542786
468917352
725863914
237481695
619275843
854396127
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1mU4y1b7WE/" target="_blank">Andy(2021)</a></p><p><a href="https://www.bilibili.com/video/BV1oC4y1s7sF" target="_blank">Andy(2020)</a></p><p>改编自：POJ2676<br /></p><p>《算法竞赛进阶指南》</p>

