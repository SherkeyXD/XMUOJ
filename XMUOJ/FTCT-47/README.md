# Kotlin程序设计

| 题目链接 | [Kotlin程序设计](http://xmuoj.com/problem/FTCT-47) |
| --- | --- |
| 可用语言 | C, C++, Java, Python2, Python3 |
| 时间限制 | 500 MS |
| 内存限制 | 256 MB |
| IO 类型 | Standard IO |
| 难度 | 低 |

## 题目描述

<p style="margin-left: 40px;">Kotlin 是一种在 Java 虚拟机上运行的静态类型编程语言，被称之为 Android 世界的Swift，由 JetBrains 设计开发并开源。<br /></p><p></p><p><span style="color: rgb(51, 51, 51);"><font>在</font>Google I/O 2017中，Google 宣布 Kotlin 成为 Android 官方开发语言。</span></p><p></p><p style="margin-left: 40px;">Kotlin是一门相对较新的语言，它于2016年发布第一个稳定版本，2017年取代Java成为Android首选开发语言。它兼容Java，比Java更简洁。</p><p><font>在</font><font>Kotlin中，for循环与我们熟悉的形式不太一样。简单地说，Kotlin中，for的循环变量实际上是在遍历一个区间。下面我们举例说明：</font></p><p style="margin-left: 40px;">for (i in 123..456)，循环变量i将取遍整数区间[123, 456]中的所有数（包含端点）。在这里，123..456是被称为整数区间（IntRange<font>），它是</font><font>Kotlin中的一个类。若想倒序遍历一个区间，则可以使用456 downTo 123（前操作数必须不小于后操作数）。无论是正向还是反向遍历，都可以使用step函数设置步长。下面是更多的例子：</font></p><p style="margin-left: 80px;">1. for (i in 0..5)，i=0，1，2，3，4，5</p><p style="margin-left: 80px;">2. for (i in 0..5 step 2)，i=0，2，4</p><p style="margin-left: 80px;">3. for (i in 2 downTo -2 step 1)，i=2，1，0，-1，-2</p><p style="margin-left: 80px;">4. for (i in 5 downTo 0 step 3)，i=5，2</p><p style="margin-left: 80px;">5. for (i in 1..2 step 3)，i=1</p><p style="margin-left: 40px;"><font>给你一段</font><font>Kotlin代码，请你输出它的运行结果。</font></p><p><br /></p><p>出题人为：陈亚峰同学</p>

## 输入

<p><font>共</font><font>7行。</font></p><p><font>第一行，固定为</font><font>“</font>fun main() {”，为main函数定义的开始。</p><p><font>第二行，固定为</font><font>“</font>var answer:Long= 0”。</p><p><font>第三行、第四行为两个嵌套的</font><font>for循环， step可能出现也可能不出现，两个操作数之间可能是“..”也可能是“ downTo</font>”。</p><p><font>第五行，保证为</font><font>answer加上内层循环变量。</font></p><p><font>第六行，固定为</font><font>“</font>println(answer)”。</p><p><font>第七行，固定为</font><font>“}”，表示main函数的结束。</font></p>

## 输出

<p>一行，代码运行的结果。<br /></p>

## 样例

### 输入1

```
fun main() {
    var answer: Long = 0
    for (i in 0..5)
        for (j in 123..456 step 2)
            answer += j
    println(answer)
}
```

### 输出1

```
289578
```

## 提示

<p><font>保证给出的是一段能通过编译的</font><font>Kotlin代码。保证代码格式与样例一致，缩进为4个空格。不保证循环变量一定为i，j，变量名长度不超过50。</font></p>

