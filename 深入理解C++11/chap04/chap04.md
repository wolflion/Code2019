## 缘起



## 内容

### 4.1、右尖括号>的改进

+ C++98中会将`>>`优先解析为右移。C++11能智能识别是不是右移。

+ 右移操作的时候，最好还是用括号括起来。

+ 4-1-1.cpp

  + ```cpp
    template <int i> class X{};
    template <class T> class Y{};
    Y<X<1> > x1;//compile success
    Y<X<2>> x2; // compile failure
    // g++ -c 4-1-1.cpp
    ```

+ 4-1-2.cpp

  + ```cpp
    template <int i> class X {};
    X <1 >> 5> x;  // C++98这个>>是位移操作，C++11报错
    ```

### 4.2、auto类型推导

+ 4.2.1、静态类型、动态类型与类型推导

  + 静态类型和动态类型的区别在于对变量进行类型检查的时间点。**静态检查主要发生在编译阶段；动态类型检查主要发生在运行阶段**。

  + [4-3.cpp]

  + `auto`早期C/C++标准的解释，具有自动存储期的局部变量。**auto声明变量的类型必须由编译器在编译时期推导而得**。

  + [4-2-2.cpp]

    + ```cpp
      int main(){
          double foo();
          auto x = 1;    //int  【本来是const int，const被省了】
          auto y = foo(); // double
          struct m { int i; }str;
          auto str1 = str;  // struct m
          auto z;  // 无法推导，无法通过编译
          z = x;
      }
      ```

      // g++ -std=c++11 4-2-2.cpp

  + **auto并非一种“类型”声明，而是一个类型声明时的“占位符”**。

+ 4.2.2、auto的优势

  + 1、在拥有初始化表达式的复杂类型变量声明时简化代码。
  + 2、免除程序员在一些类型声明时的麻烦，或者避免一些在类型声明时的错误。
    + [4-2-6.cpp]
  + 3、其“自适应”性能够在一定程度上支持泛型的编程。
    + [4-2-7.cpp]

+ 4.2.3、auto的使用细则

  + auto可以与指针和引用结合起来使用
    + [4-2-9.cpp]

### 4.3、decltype

+ 4.3.1、typeid与decltype

  + C++98对动态类型支持就是C++中的运行时类型识别（RTTI）。

  + RTTI的机制是为每个类型产生一个type_info类型的数据，程序员可以在程序中使用typeid随时查询一个变量的类型，typeid就会返回变量相应的type_info数据。

  + [4-3-1.cpp]

  + **类型推导是随着模板和泛型编程的广泛使用而引入的**。

  + [4-3-2.cpp]

  + **decltype的类型推导并不是像auto一样是从变量声明开始的初始化表达式获得变量的类型，decltype总是以一个普通的表达式为参数，返回该表达式的类型。

    + ```cpp
      int i;
      decltype(i) j = 0;
      ```

+ 4.3.2、decltype的应用

  + 一些例子

    + ```cpp
      using size_t = decltype(sizeof(0));
      using ptrdiff_t = decltype((int*)0-(int*)0);
      using nullptr_t = decltype(nullptr);
      ```

+ 4.3.3、decltype推导四规则

  + ```cpp
    int i;
    decltype((i)) b;  // b int &，无法编译通过
    ```

  + 依序判断以下四规则：

    + 如果e是一个没有带
    + 否则，假设e的类型是T，如果e是一个
    + 否则，假设e的类型是T，如果e是一个
    + 否则，假设e的类型是T，则decltype(e)为T。

+ 4.3.4、cv限制符的继承与冗余的符号

  + [4-3-12.cpp]

### 4.4、追踪返回类型

+ 4.4.1、追踪返回类型的引入

### 4.5、基于范围的for循环

+ `for_each`的概念
+ [4-5-5.cpp]

### 4.6、本章小结