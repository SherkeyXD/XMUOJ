# 求二进制中1的个数

| 题目链接 | [求二进制中1的个数](http://xmuoj.com/problem/XMU002) |
| --- | --- |
| 可用语言 | C, C++ |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p><span style="color: rgb(51, 51, 51);"><img alt="料理.gif" src="/public/upload/f9ed434226.gif" width="489" height="366" /><br /></span></p><p>为了寻找失去的回忆碎片，林克必须预备足够的料理。能够快速突破数独试炼，熟练运用lowbit，才能把难题转换为美味佳肴。</p><p><span style="color: rgb(51, 51, 51);">请用lowbit解决如下问题：</span></p><p><span style="color: rgb(51, 51, 51);">输入一个32位整数，输出该数二进制表示中1的个数。</span><br /></p><p>注意：</p><ul><li>负数在计算机中用其绝对值的补码来表示。</li></ul>

## 输入

<pre><code style="font-family: Menlo, Monaco, Consolas, &quot;Courier New&quot;, monospace; font-size: inherit; padding: 0px; color: inherit; background: transparent; border-radius: 3px; margin: 0px; border: none;">输入：9
输出：2
解释：9的二进制表示是1001，一共有2个1。</code></pre>

## 输出

<pre><code style="font-family: Menlo, Monaco, Consolas, &quot;Courier New&quot;, monospace; font-size: inherit; padding: 0px; color: inherit; background: transparent; border-radius: 3px; margin: 0px; border: none;">输入：-2
输出：31
解释：-2在计算机里会被表示成11111111111111111111111111111110，
      一共有31个1。</code></pre>

## 样例

### 输入1

```
-2
```

### 输出1

```
31
```

### 输入2

```
9
```

### 输出2

```
2
```

## 提示

<p><a href="https://www.bilibili.com/video/BV1Kf4y1S7mB" target="_blank">Andy讲解</a><br /></p>

## 来源

xmu

