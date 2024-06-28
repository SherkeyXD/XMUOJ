# 击杀黄金蛋糕人马

| 题目链接 | [击杀黄金蛋糕人马](http://xmuoj.com/problem/NQ090) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p>在海拉鲁大陆冒险，没有绝佳的剑法+想象力是不可能存活下来的。</p><p>这不，林克遇到了一个特别巨大的敌人——黄金蛋糕人马（莱尼尔的变种）</p><p><span style="color: rgb(51, 51, 51);">这黄金蛋糕人马</span>长相非常特别，没有脚没有手没有嘴巴没有头，整个身材就是一个大矩形（喂喂，这不就是黄金莱尼尔吗？）</p><p><img alt="image.png" src="/public/upload/c566399d7b.png" width="863" height="462" /><br />它的长和宽分别是整数w、h。</p><p>林克举起大师之剑，挥向<span style="color: rgb(51, 51, 51);">黄金蛋糕人马</span>，要将其切成m块矩形小块打包走，分给自己的朋友（每块都必须是矩形、且长和宽均为整数）。</p><p>大师之剑无比锐利，每一斩带出的剑气能将<span style="color: rgb(51, 51, 51);">黄金蛋糕人马</span>劈成两半（形成两个小矩形蛋糕）。</p><p>经过m-1斩，<span style="color: rgb(51, 51, 51);">黄金蛋糕人马</span>居然被劈成m块小蛋糕（喂喂，你的想象力也太丰富了，明明切不开好吗？）</p><p>请计算：最后得到的m块小蛋糕中，最大的那块蛋糕的面积下限。<br /><br /></p><p>假设w= 4,h= 4,m= 4，则下面的斩击可使得其中最大蛋糕块的面积最小。(十字斩)</p><p><img src="http://media.openjudge.cn/images/upload/1372385654.gif" /><br /></p><p><span style="color: rgb(35, 31, 23);">假设</span>w<span style="color: rgb(35, 31, 23);">= 4,h= 4,m= 3</span><span style="color: rgb(35, 31, 23);">，则下<span style="color: rgb(51, 51, 51);">面的斩击可</span>使得其中最大蛋糕块的面积最小</span><span style="color: rgb(35, 31, 23);">:.(二连斩)</span><br /></p><p><span style="color: rgb(35, 31, 23);"><img src="http://media.openjudge.cn/images/upload/1372385663.gif" /><br /></span></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">共有多行，每行表示一个测试案例。</span></p><p><span style="color: rgb(35, 31, 23);">每行是三个用空格分开的整数w, h, m ，其中1 ≤ w, h, m ≤ 20 ， m ≤ wh.</span></p><p><span style="color: rgb(35, 31, 23);">当 w = h = m = 0 时不需要处理，表示输入结束。</span><br /></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">每个测试案例的结果占一行，输出一个整数，表示最大蛋糕块的面积下限。</span><br /></p>

## 样例

### 输入1

```
4 4 4
4 4 3
0 0 0
```

### 输出1

```
4
6
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1ti4y1b7s1" target="_blank">Andy讲解</a><br /></p><p>改编自《<a href="https://www.bilibili.com/video/BV1Zb411q7iY?p=33" target="_blank">分蛋糕</a>》</p>

## 来源

xmu

