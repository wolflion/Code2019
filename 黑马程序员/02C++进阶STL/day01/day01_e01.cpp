//01 函数模板基本语法_rec   【学新知识，要想一下之前的局限性】

//#4的作用，这个要在VS里配置

#include<iostream>
using namespace std;

#if 0
// int类型数据交换
void MySwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// double的话，又得再写一个  [只有参数类型不一样，功能实现都一样]
void MySwap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}
#endif // 0

// 模板技术，类型参数化，编写代码可以忽略类型
template<typename T>  //为了让编译器区分是 普通函数，还是 模板函数  【class或typename，两种写法都行】
//只对后面第1个函数生效，每写一个函数，都需要template，可以有多个占位符。
void MySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test0()
{
    //自动类型推导
    int a=10,b=20;
    MySwap(a,b);  //根据给定的值，进行自动类型推导
    cout<<a<<","<<b<<endl;

    double da = 1.2,db = 2.3;
    MySwap(da,db);
    cout<<da<<","<<db<<endl;

    //显式指定类型
    MySwap<int>(a,b);   // 这个语法还不太熟【lionel】
}

int main()
{
    test0();
    return 0;
}
