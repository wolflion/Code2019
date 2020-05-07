## 缘起

+ 247/336

## 内容

### 7.1、指针空值-nullptr

+ 7.1.1、指针空值：从0到NULL，再到nullptr
  + [7-1-1.cpp]
  + [7-1-2.cpp]
+ 7.1.2、nullptr和nullptr_t
  + nullptr是指针空值常量
  + nullptr_t是指针空值类型
  + [7-1-3.cpp]
+ 7.1.3、一些关于nullptr规则的讨论
  + nullptr类型数据所占用的内存空间大小跟void*相同，`sizeof(nullptr_t) == sizeof(void*)`
  + nullptr是一个编译时期的常量，它的名字是一个编译时期的关键字，能够为编译器所识别。`(void*)0`只是一个强制转换表达式，其返回的也是一个void*指针类型。

### 7.2、默认函数的控制

+ 7.2.1、类与默认函数
+ 7.2.2、

### 7.3、lambda函数   261/336

+ 7.3.1、lambda的一些历史
  + 希腊字母表中位于第11位，**lambda则是被用来表示一种匿名函数**。
+ 7.3.2、C++11中的lambda函数
  + `[capture](parameters) mutable ->return-type{statement}`，具体`auto totalChild = [](int x, int y) ->int{return x + y; };`
+ 7.3.3、lambda与仿函数
  + **仿函数**简单地说，就是重定义了成员函数operator()的一种自定义类型对象。**不是函数名称，而是对象名称**。
+ 7.3.4、lambda的基础使用
  + [7-3-7.cpp]
  + lambda函数等同于一个“局部函数”。
+ 7.3.5、关于lambda的一些问题及有趣的实验
  + [7-3-9.cpp]
+ 7.3.6、lambda与STL
  + [7-3-13.cpp]
+ 7.3.7、更多的一些关于lambda的讨论