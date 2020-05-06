//05 模板函数实现原理剖析_rec.

/*
做手链模子--生产具体的手链--才能带到手上


函数模板-->要产生具体的函数，才能进行调用

【函数模板】--重点是模板，类型是T。
【模板函数】--重点是函数，类型是具体的float或int类型

*/
#include <iostream>
using namespace std;

// 函数模板
template<typename T>
T MyAdd(T a, T b)
{
    return a+b;
}

int main()
{
    int a=10,b=20;
    double da=1.14,db = 2.14;
    MyAdd(a,b);
    MyAdd(da,db);
    //看MyAdd(a,a)这种也只是占用原来的 模板函数
    MyAdd(a,a);

    // 【调用3次，但只有2个函数原型  查看vim index.s文件】

    return 0;
}

// g++ -S index.cpp -o index.s
// vim index.s  【找到call关键字】iET, dET两个函数名不一样

// 两次编译（第1次：编译函数模板；第2次：根据不同的调用，编译生成具体函数）

