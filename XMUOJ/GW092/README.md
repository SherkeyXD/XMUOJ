# 英杰们的蛋糕塔

| 题目链接 | [英杰们的蛋糕塔](http://xmuoj.com/problem/GW092) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 高 |

## 题目描述

<p><span style="color: rgb(35, 31, 23);"><img src="https://tse4-mm.cn.bing.net/th?id=OIP.CavPwvaW2jmarrEH3iSs3wHaEo&pid=Api&rs=1" alt="查看源图像" /><br /></span></p><p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">塞尔达公主</span>的生日将近，英杰们预备绞尽脑汁要为公主作一个生日蛋糕塔。</span></p><p><span style="color: rgb(35, 31, 23);">这个蛋糕塔一共有N层，每层都是圆柱体，象征英杰们合一平等的关系。</span></p><p><span style="color: rgb(35, 31, 23);">蛋糕塔的总体积是 V * π 。</span></p><p><span style="color: rgb(35, 31, 23);">最底层的蛋糕半径最大，最上层的蛋糕半径最小，这种结构象征英杰们稳固的生命根基。</span></p><p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">因此从底层往上层数，第i (1 &lt;= i &lt;= N) 层是半径为 r(i), 高度为h(i) 的圆柱体。当 i &lt; N 时，有r(i) &gt; r(i+ 1) 且 h(i) &gt; h(i+1)。</span></span></p><p><span style="color: rgb(35, 31, 23);"><span style="color: rgb(35, 31, 23);">蛋糕塔每一层圆柱体的半径r(i)和高度h(i)都是整数，象征公主英杰们不打折的忠诚。</span></span></p><p><span style="color: rgb(35, 31, 23);">蛋糕塔的表面积，象征英杰们与公主的亲密关系面临的外部挑战。</span></p><p><span style="color: rgb(35, 31, 23);">因此，对于给定的V和N，我们希望找到一个使表面积最小的蛋糕塔制作方案。</span></p><p><span style="color: rgb(35, 31, 23);">令表面积Q = S<span style="color: rgb(35, 31, 23);">* π，</span></span><span style="color: rgb(35, 31, 23);">对<span style="color: rgb(35, 31, 23);">给定的V和N</span>，请输出使Q最小的S是多少。</span></p><p><span style="color: rgb(35, 31, 23);">（除Q外，以上所有数据皆为正整数，下图是蛋糕塔的俯视图和示意图）</span></p><p><span style="color: rgb(35, 31, 23);"><img alt="image.png" src="/public/upload/f92aa2fa22.png" width="405" height="405" /></span><img alt="image.png" src="http://www.xmuoj.com/public/upload/5876ef28f6.png" width="322" height="273" /><span style="color: rgb(35, 31, 23);"><br /></span></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">有两行，第一行为V（V &lt;= 100000），表示待制作的蛋糕的体积为<span style="color: rgb(35, 31, 23);">V * π</span>；第二行为N(N &lt;= 20)，表示蛋糕的层数为N。</span><br /></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">仅一行，是一个正整数S（若无解则S = 0）。</span><br /></p><p><font>提示：根据题意，我们无需计算<span style="color: rgb(35, 31, 23);">π，因此有</span></font></p><p style="margin-left: 0px;">圆柱<span style="color: rgb(35, 31, 23);">体积v&#039; = r</span>*r*h<br />圆柱<span style="color: rgb(35, 31, 23);">侧面积 s&#039; = 2*r*h<br /></span><span style="color: rgb(35, 31, 23);">圆柱底面积c&#039;= r*r</span></p><p><font><span style="color: rgb(35, 31, 23);"><br /></span></font></p>

## 样例

### 输入1

```
100
2
```

### 输出1

```
68
```

## 提示

<p style="margin-left: 0px;"><a href="https://www.bilibili.com/video/BV1Bp4y1C7Qs" target="_blank">Andy讲解(B站)</a>（更正：R和H都要逐层递减，题面无误)</p><p>（改编自《生日蛋糕》，<a href="https://www.acwing.com/video/481/" target="_blank">Y总讲解(付费)</a>）</p>

## 来源

xmu

