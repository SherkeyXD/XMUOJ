# 递归求波兰表达式

| 题目链接 | [递归求波兰表达式](http://xmuoj.com/problem/NQ073) |
| --- | --- |
| 可用语言 | C, C++, Python3 |
| 时间限制 | 1000 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 中 |

## 题目描述

<p>站在巨人的肩膀上，编程之路才能越走越宽。小华继续向小鲁讲授新的知识点：波兰表达式。</p><p style="margin-left: 40px;">逆波兰表达式，英文为 Reverse Polish notation，跟波兰表达式（Polish notation）相对应。</p><p style="margin-left: 40px;">之所以叫波兰表达式和逆波兰表达式，是为了纪念波兰的数理科学家 Jan Łukasiewicz的创意。</p><ul><li>平时我们习惯将表达式写成 (1 + 2) * (3 + 4)，加减乘除等运算符写在中间，因此称呼为中缀表达式。</li><li>而波兰表达式的写法为 (* (+ 1 2) (+ 3 4))，将运算符写在前面，因而也称为前缀表达式。</li><li>逆波兰表达式的写法为 ((1 2 +) (3 4 +) *)，将运算符写在后面，因而也称为后缀表达式。</li></ul><p style="margin-left: 40px;">波兰表达式和逆波兰表达式有个好处，就算将圆括号去掉也没有歧义。上述的波兰表达式去掉圆括号，变为<code>* + 1 2 + 3 4</code>。逆波兰表达式去掉圆括号，变成<code>1 2 + 3 4 + *</code>也是无歧义并可以计算的。事实上我们通常说的波兰表达式和逆波兰表达式就是去掉圆括号的。而中缀表达式，假如去掉圆括号，将 (1 + 2)(3 + 4) 写成 1 + 23 + 4，就改变原来意思了。</p><p style="margin-left: 40px;"><code>(2 + 3) * 4</code>的波兰表示法为<code>* + 2 3 4</code></p><p style="">请写程序求解波兰表达式的值。</p><p style="">注意：本题输入的运算符只包括如下4个运算符：<code>+ - * /</code></p><p style="margin-left: 0px;"><span style="color: rgb(35, 31, 23);">提示：可使用atof(str)把字符串转换为一个double类型的浮点数，方便求解。</span></p>

## 输入

<p><span style="color: rgb(35, 31, 23);">输入为一行波兰表达式，其中运算符和运算数之间都用空格分隔，运算数是浮点数。</span><br /></p>

## 输出

<p><span style="color: rgb(35, 31, 23);">输出为一行，表达式的值。</span></p><p><span style="color: rgb(35, 31, 23);">可直接用printf(&quot;%f\n&quot;, v)输出表达式的值v。</span></p>

## 样例

### 输入1

```
* + 11.0 12.0 + 24.0 35.0
```

### 输出1

```
1357.000000
```

## 提示

<p><a href="https://www.bilibili.com/video/BV12f4y1s7yV" target="_blank">Andy讲解(2021)</a><br /></p>

