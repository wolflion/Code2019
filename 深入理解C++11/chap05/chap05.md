## 缘起

+ 181/336

## 内容

### 5.1、强类型枚举

+ 5.1.1、枚举：分门别类与数值的名字
  + 当程序中需要“数值的名字”的时候，我们常常可以使用以下3种方式来实现
    + 第一种：宏
    + 第二种：匿名枚举  `enum {Male, Female};`
    + 第三种：静态常量  `const static int Male = 0;`
+ 5.1.2、有缺陷的枚举类型
  + [5-1-1.cpp]
  + [5-1-2.cpp]
  + [5-1-3.cpp]
  + [5-1-4.cpp]
+ 5.1.3、强类型枚举以及C++11对原有枚举类型的扩展
  + 非强类型作用域，允许隐式转换为整型，占用存储空间及符号性不确定，都是**枚举类的缺点**。
  + **枚举类**，也叫“强类型枚举”。`enum class Type{General,Light,Medium,Heavy};`
  + **匿名的enum class可能什么都做不了** [5-1-7.cpp]

### 5.2、堆内存管理：智能指针与垃圾回收

+ 5.2.1、显式内存管理
  + 野指针：
  + 重复释放：
  + 内存泄漏：
+ 5.2.2、C++11的智能指针
  + C++98中，通过一个模板类型"auto_ptr"实现。
  + C++11中改用unique_ptr、shared_ptr及weak_ptr等智能指针来自动回收堆分配的对象。
  + [5-2-1.cpp]
  + [5-2-2.cpp]
+ 5.2.3、垃圾回收的分类
  + 1、基于引用计数（reference counting garbage collector）的垃圾回收器
  + 2、基于跟踪处理（tracing garbage collector）的垃圾回收器
    + 标记-清除（Mark-Sweep）
    + 标记-整理（Mark-Compact）
    + 标记-拷贝（Mark-Copy）
+ 5.2.4、C++与垃圾回收
  + C/C++垃圾回收库-Boehm
+ 5.2.5、C++11与最小垃圾回收支持
+ 5.2.6、垃圾回收的兼容性



## 收获

+ [c++11 pod类型(了解)](https://www.cnblogs.com/zzyoucan/p/3918614.html)
+ [C++之POD数据类型](https://blog.csdn.net/u011475134/article/details/72900890)
+ [POD类型的几点总结](https://blog.csdn.net/malong777/article/details/48901381)

