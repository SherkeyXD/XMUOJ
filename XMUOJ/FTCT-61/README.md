# 盒子

| 题目链接 | [盒子](http://xmuoj.com/problem/FTCT-61) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p>对于每个数据点，你需要回答T组测试用例。</p><p>在你面前有 10^9 个盒子排成一行，依次编号为 1,2,..., 10^9。</p><p>同时你有 N 个球，依次编号为 1,2,...,N。</p><p>你需要将这 N 个球都放到盒子里面，使得：</p><ul><li><p>每个盒子至多放一个球。</p></li><li><p>对于第 i 个球，其被放到了编号在 L_i 到 R_i​ 的某个盒子中。</p></li></ul><p>回答是否存在一种放置方案满足上述条件，输出<code>Yes</code>或<code>No</code>分别表示存在/不存在一种放置方案满足上述条件。</p><p><br /></p><p>出题者为邹品聪同学<br /></p>

## 输入

<p>输入数据的第一行包含一个正整数 T(1&lt;T&lt;=2*10^5)，表示每个数据点的测试用例数。</p><p>接下来共有  $T$  个测试用例，对于每个测试用例：</p><ul><li><p>第一行包含一个正整数 N(1<span style="color: rgb(51, 51, 51);">&lt;=</span>N&lt;=2*10^5)，表示你拥有的球的个数；</p></li><li><p>接下来  $N$  行，其中的第  $i$  行包含用空格分隔的两个正整数 L_i 和 R_i（1<span style="color: rgb(51, 51, 51);">&lt;=</span>L_i<span style="color: rgb(51, 51, 51);">&lt;=</span>R_i<span style="color: rgb(51, 51, 51);">&lt;=</span>10^9），表示第 i 个球需要放到编号在区间 L_i 到R_i 的盒子中。</p></li></ul><p>保证每个数据点的所有测试用例的 N 之和不超过 2*10^5。</p>

## 输出

<p><span style="color: rgb(51, 51, 51);">输出T行</span><span style="color: rgb(51, 51, 51);"><code>Yes</code></span><span style="color: rgb(51, 51, 51);">或</span><span style="color: rgb(51, 51, 51);"><code>No</code></span><span style="color: rgb(51, 51, 51);">，其中第  $i$  行表示第 i 个测试用例的答案，</span><span style="color: rgb(51, 51, 51);"><code>Yes</code></span><span style="color: rgb(51, 51, 51);">表示存在合法的放置方案，</span><span style="color: rgb(51, 51, 51);"><code>No</code></span><span style="color: rgb(51, 51, 51);">表示不存在合法的放置方案。</span><br /></p>

## 样例

### 输入1

```
2
3
1 2
2 3
3 3
5
1 2
2 3
3 3
1 3
999999999 1000000000
```

### 输出1

```
Yes
No
```

## 提示

<p>样例包含两组测试用例</p><ul><li><p>在第一个测试用例中，下面这种放置方案可以满足题目条件，因此应当输出<code>Yes</code>：</p><ul><li><p>将 1 号球放置在 1 号箱子。</p></li><li><p>将 2 号球放置在 2 号箱子。</p></li><li><p>将 3 号球放置在 3 号箱子。</p></li></ul></li><li><p>在第二个测试用例中，没有任何一种放置方案可以满足题目条件，因此应当输出<code>No</code>。</p></li></ul>

