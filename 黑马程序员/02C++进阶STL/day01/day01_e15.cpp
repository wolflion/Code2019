//15 类模板碰到static成员_rec

/*
static 关键字 在 类模板没有生成 具体类A时，static没什么用。

类A，类B都由 类模板派生，但static不是一回事。
*/

#include<iostream>
using namespace std;

template<typename T>

class Person
{
public:
    static  int a;
};

template<typename T>
int Person<T>::a = 0; //类外初始化

int main(void)
{

    Person<int>p1,p2,p3;
    Person<char>cp1,cp2,cp3;  // 类模板实例化出来的对象

    p1.a = 10;
    cp1.a = 100;

    // 说明两个具体Peron的static不一样，会拿到自身类独有的static成员
    cout<<p1.a<<","<<p2.a<<","<<p3.a<<endl; // 10
    cout<<cp1.a<<","<<cp2.a<<","<<cp3.a<<endl; // 100
}
