# 寻找林克的回忆(4)

| 题目链接 | [寻找林克的回忆(4)](http://xmuoj.com/problem/XMU018) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 5000 MS |
| 内存限制 | 258 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p style="margin-left: 0px;"><img alt="image.png" src="/public/upload/452568f066.png" width="652" height="367" /><br /></p><p>为了寻回百年前与公主一起的记忆碎片，林克终于来到了数独试炼的终阶——16*16字母数独</p><p>（如果通过，可以获得最后的的20%的记忆碎片)。</p><p style="margin-left: 0px;">字母数独要求如下：</p><p style="margin-left: 0px;">将一个16x16的数独填写完整，使得每行、每列、每个4x4十六宫格内字母A~P均恰好出现一次。</p><p>保证每个输入只有唯一解决方案。</p><p><img src="https://www.acwing.com/media/article/image/2019/01/16/19_cabce58018-%E6%95%B0%E7%8B%AC2.jpg" alt="数独2.jpg" /><br /></p>

## 输入

<p>输入包含多组测试用例。</p><p>每组测试用例包括16行，每行一组字符串，共16个字符串。</p><p>第i个字符串表示数独的第i行。</p><p>字符串包含字符可能为字母A~P或”-“（表示等待填充）。</p><p>测试用例之间用单个空行分隔，输入至文件结尾处终止。</p>

## 输出

<p>对于每个测试用例，均要求保持与输入相同的格式，将填充完成后的数独输出。</p><p>每个测试用例输出结束后，输出一个空行。</p>

## 样例

### 输入1

```
--A----C-----O-I
-J--A-B-P-CGF-H-
--D--F-I-E----P-
-G-EL-H----M-J--
----E----C--G---
-I--K-GA-B---E-J
D-GP--J-F----A--
-E---C-B--DP--O-
E--F-M--D--L-K-A
-C--------O-I-L-
H-P-C--F-A--B---
---G-OD---J----H
K---J----H-A-P-L
--B--P--E--K--A-
-H--B--K--FI-C--
--F---C--D--H-N-
```

### 输出1

```
FPAHMJECNLBDKOGI
OJMIANBDPKCGFLHE
LNDKGFOIJEAHMBPC
BGCELKHPOFIMAJDN
MFHBELPOACKJGNID
CILNKDGAHBMOPEFJ
DOGPIHJMFNLECAKB
JEKAFCNBGIDPLHOM
EBOFPMIJDGHLNKCA
NCJDHBAEKMOFIGLP
HMPLCGKFIAENBDJO
AKIGNODLBPJCEFMH
KDEMJIFNCHGAOPBL
GLBCDPMHEONKJIAF
PHNOBALKMJFIDCEG
IAFJOECGLDPBHMNK
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.acwing.com/video/103/" target="_blank">ACWing讲解</a></p><p><a href="https://www.bilibili.com/video/bv1Tf4y1p7y4" target="_blank">Andy2021</a></p><p>(来源《算法竞赛进阶指南》)</p>

## 来源

xmu

