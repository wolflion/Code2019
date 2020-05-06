//06 类型转换 const_cat和reinterpret_cat_rec.
#include<iostream>
using namespace std;

// const_cast指针 引用 或者对象指针

void test03()
{
    // 1、基础数据类型
    int a = 10;
    const int& b = a;  // b=20;会报错，不能修改
    int& c = const_cast<int&>(b);
    c=20;
    cout<<a<<endl;  //就是20了。

    // 2、指针
    const int *p = NULL;
    //const int*&
    int *p2 = const_cast<int*>(p);

    int *p3 = NULL;
    const int *p4 = const_cast<const int*>(p3);
    // 增加或去除变量const性  【不是对原有的变量消除】
}

class Building{};
class Animal{};
// reinterpret_cast强制类型转换，任何类型的指针，都能转换

typedef void(FUNC)(int,int);  //typedef void(*FUNC)
typedef int(FUNC2)(int,char*);
void test04()
{
    // 1、无关类型转换
    Building* build = NULL;
    Animal *ani = reinterpret_cast<Animal*>(build);

    // 2、函数指针转化
    FUNC* func1;
    FUNC2* func2 = reinterpret_cast<FUNC2*>(func1);
}

int main()
{
    test03();
    return 0;
}
