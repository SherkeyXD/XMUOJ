# 逆序链表

| 题目链接 | [逆序链表](http://xmuoj.com/problem/CPP016) |
| --- | --- |
| 可用语言 | C++ |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p>在上一道题中，我们学会了如何创建链表，这道题我们将练习如何对链表逆序输出。</p>

## 输入

<p><span style="color: rgb(51, 51, 51);">输入一串正整数和-1，两个数之间用空格隔开，以-1作为结束标记。</span><br /></p><p><span style="color: rgb(51, 51, 51);">在输入的数中，只有正整数和-1，不会出现其他数，且-1一定出现在最后。</span></p>

## 输出

<p><span style="color: rgb(51, 51, 51);">按输入时的<b>相反顺序</b>，输出所有的正整数，且每个正整数后输出一个空格。</span><br /></p><p><span style="color: rgb(51, 51, 51);">如果没有输入任何正整数，则直接输出-1。</span></p>

## 样例

### 输入1

```
5 3 2 6 -1
```

### 输出1

```
6 2 3 5 
```

### 输入2

```
-1
```

### 输出2

```
-1 
```

## 提示

<p><span style="color: rgb(73, 80, 96);">本题为程序填空题，代码如下。</span><br /></p><p>#include&lt;iostream&gt;</p><p>using namespace std;</p><p>struct node</p><p>{</p><p style="margin-left: 40px;">int val;</p><p style="margin-left: 40px;">node* next;</p><p>};</p><p>node* createList()</p><p>{//请你将这个函数补充完整</p><p>}</p><p>node* reverseList(node* head)<br /></p><p></p><p>{//请你将这个函数补充完整</p><p>}</p><p>int main()</p><p>{</p><p style="margin-left: 40px;">node* head = NULL;</p><p style="margin-left: 40px;">head = createList();</p><p style="margin-left: 40px;">node* head1 = NULL;<br /></p><p style="margin-left: 40px;">head1 = reverseList(head);<br /></p><p style="margin-left: 40px;">if (head1 == NULL)</p><p style="margin-left: 40px;">{</p><p style="margin-left: 80px;">cout &lt;&lt; &quot;-1 &quot;;</p><p style="margin-left: 40px;">}</p><p style="margin-left: 40px;">else</p><p style="margin-left: 40px;">{</p><p style="margin-left: 80px;">node* p = head1;</p><p style="margin-left: 80px;">while (p != NULL)</p><p style="margin-left: 80px;">{</p><p style="margin-left: 120px;">cout &lt;&lt; p-&gt;val &lt;&lt; &quot; &quot;;</p><p style="margin-left: 120px;">p = p-&gt;next;</p><p style="margin-left: 80px;">}</p><p style="margin-left: 40px;">}</p><p style="margin-left: 40px;">return 0;</p><p>}</p>

