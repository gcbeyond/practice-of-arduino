---
layout: default
title: Arduino 体系介绍
category: section-1
---

## Arduino 的起源
Arduino，是一个开放源代码的单芯片微电脑，它使用了 Atmel AVR [单片机](http://zh.wikipedia.org/wiki/%E5%8D%95%E7%89%87%E6%9C%BA)，采用了基于开放源代码的软硬件平台，构建于开放源代码 Simple I/O 接口板，并且具有使用类似 Java，C 语言的 Processing/Wiring 开发环境。

[Wikipedia](http://zh.wikipedia.org/wiki/Arduino) 中记录了 Arduino 的诞生：
> 据说 Massimo Banzi（创始人）之前是意大利 Ivrea 一家高科技设计学校的老师。他的学生们经常抱怨找不到便宜好用的微控制器。2005 年冬天， Massimo Banzi 跟 David Cuartielles 讨论了这个问题。David Cuartielles 是一个西班牙籍芯片工程师，当时在这所学校做访问学者。两人决定设计自己的电路板，并引入了 Banzi 的学生 David Mellis 为电路板设计编程语言。两天以后，David Mellis 就写出了程式码。又过了三天，电路板就完工了。这块电路板被命名为 Arduino。
>
> 几乎任何人，即使不懂电脑编程，也能用 Arduino 做出很酷的东西，比如对传感器作出回应，闪烁灯光，还能控制马达。随后 Banzi, Cuartielles 和 Mellis 把设计图放到了网上。保持设计的开放源码理念，因为版权法可以监管开源软件，却很难用在硬件上，他们决定采用共享创意许可。共享创意是为保护开放版权行为而出现的类似 GPL 的一种许可（license）。在共享创意许可下，任何人都被允许生产电路板的复制品，还能重新设计，甚至销售原设计的复制品。你不需要付版税，甚至不用取得 Arduino 团队的许可。然而，如果你重新发布了引用设计，你必须说明原始 Arduino 团队的贡献。如果你调整或改动了电路板，你的最新设计必须使用相同或类似的共享创意许可，以保证新版本的 Arduino 电路板也会一样的自由和开放。唯一被保留的只有 Arduino 这个名字。它被注册成了商标。如果有人想用这个名字卖电路板，那他们可能必须付一点商标费用给 Arduino 的核心开发团队成员。

## 为什么要使用 Arduino？

有很多的单片机和单片机平台都适合用做交互式系统的设计。例如：Parallax Basic Stamp， Netmedia’s BX-24，Phidgets，MIT’s Handyboard 和其它等等提供类似功能的。 所有这些工具，你都不需要去关心单片机编程繁琐的细节，提供给你的是一套容易使用的工具包。 Arduino 同样也简化了同单片机工作的流程，但同其它系统相比 Arduino 在很多地方更具有优越性， 特别适合老师，学生和一些业余爱好者们使用：

* 便宜 － 和其它单片机平台相比，Arduino板算是相当便宜了。最便宜的Arduino版本可以自己 动手制作，即使是组装好的成品，其价格也不会超过 $50（在中国更便宜）。
* 跨平台 － Arduino 软件可以运行在 Windows，Mac OSX，和 Linux 操作系统。大部分其它的单片机系统都只能运行在 Windows 上。
* 简易的编程环境 － 初学者很容易就能学会使用Arduino编程环境，同时它又能为高级用户提供足够多的高级应用。对于老师们来说，一般都能很方便的使用 Processing 编程环境，所以如果学生学习过使用 Processing 编程环境的话，那他们在使用 Arduino 开发环境的时候就会觉得很相似很熟悉。
* 软件开源并可扩展 － Arduino 软件是开源的，对于有经验的程序员可以对其进行扩展。Arduino 编程语言可以通过C++库进行扩展，如果有人想去了解技术上的细节，可以跳过Arduino语言而直接使用 AVR C  编程语言（因为 Arduino 语言实际上是基于AVR C 的）。类似的，如果你需要的话，你也可以直接往你的Arduino程序中添加 AVR-C 代码。
* 硬件开源并可扩展 － Arduino 板基于 Atmel 的 ATMEGA8 和 ATMEGA168 单片机。Arduino 基于 Creative Commons 许可协议，所以有经验的电路设计师能够根据需求设计自己的模块，可以对其扩展或改进。甚至是对于一些相对没有什么经验的用户，也可以通过制作试验板来理解 Arduino 是怎么工作的，省钱又省事。


## Arduino 可以做什么？
Arduino 可以通过传感器感知外界环境（比如温度、压强、湿度、颜色等等），并且当外界环境发生变化时，可以按照预先设定的程序通过控制马达、制动器、继电器等对环境进行干预。其实简单说就是可以认识世界并改造世界，只是没有人类那么厉害罢了。



### 相关链接
* [什么是Arduino？ 送给和我一样不明白的人](http://home.eeworld.com.cn/my/space-uid-82070-blogid-42296.html)
* [Arduino VS 树莓派：哪个才是你的菜？](http://www.geekfan.net/1359/)
