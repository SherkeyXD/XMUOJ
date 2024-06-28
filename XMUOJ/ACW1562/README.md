# BFS试炼之微博转发

| 题目链接 | [BFS试炼之微博转发](http://xmuoj.com/problem/ACW1562) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p>微博上的用户既可能有很多关注者，也可能关注很多其他用户。</p><p>因此，形成了一种基于这些关注关系的社交网络。</p><p>当用户在微博上发布帖子时，他/她的所有关注者都可以查看并转发他/她的帖子，然后这些人的关注者可以对内容再次转发…</p><p>现在给定一个社交网络，假设只考虑L层关注者，请你计算某些用户的帖子的最大可能转发量。</p><h4>补充</h4><p>如果B是A的关注者，C是B的关注者，那么AA的第一层关注者是B，第二层关注者是C。</p>

## 输入

<p>第一行包含两个整数，N表示用户数量，LL示需要考虑的关注者的层数。</p><p>假设，所有的用户的编号为1∼N。</p><p>接下来N行，每行包含一个用户的关注信息，格式如下：</p><pre><code style="font-family: Menlo, Monaco, Consolas, &quot;Courier New&quot;, monospace; font-size: inherit; padding: 0px; color: inherit; background: transparent; border-radius: 3px; margin: 0px; border: none;"><span class="hljs-selector-tag" style="color: rgb(0, 0, 255);">M</span><span class="hljs-selector-attr" style="color: rgb(43, 145, 175);">[i]</span> <span class="hljs-selector-tag" style="color: rgb(0, 0, 255);">user_list</span><span class="hljs-selector-attr" style="color: rgb(43, 145, 175);">[i]</span></code></pre><p><code>M[i]</code>是第ii名用户关注的总人数，<code>user_list[i]</code>是第ii名用户关注的<code>M[i]</code>个用户的编号列表。</p><p>最后一行首先包含一个整数K，表示询问次数，然后包含K个用户编号，表示询问这些人的帖子的最大可能转发量。</p><h4>数据范围</h4><p>1≤N≤1000,<br />1≤L≤6,<br />1≤M[i]≤100,<br />1≤K≤N</p>

## 输出

<p>按顺序，每行输出一个被询问人的帖子最大可能转发量。</p><p>假设每名用户初次看到帖子时，都会转发帖子，只考虑L层关注者。</p>

## 样例

### 输入1

```
7 3
3 2 3 4
0
2 5 6
2 3 1
2 3 4
1 4
1 5
2 2 6
```

### 输出1

```
4
5
```

