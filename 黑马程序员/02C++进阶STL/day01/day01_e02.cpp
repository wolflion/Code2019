//02 函数模板和普通函数的区别_函数模板调用规则_rec.
// 两者的调用规则   【两者都匹配时，优先调用成员函数】
// 强制想调用模板 MyAdd<>(a,b)这种


#include<iostream>
using namespace std;

template<typename T>
int MyAdd(T a,T b)    // 相当于重载  【返回值不同  不是重载的条件】
{
    return a+b;
}

int MyAdd(int a, char c)
{
    return a+c;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c1='a',c2='b';

    cout<<MyAdd(a,c1)<<endl;  // 成员函数
    cout<<MyAdd(a,b)<<endl;  // 函数模板       【严格的类型匹配】

    cout<<MyAdd(c1,b)<<endl; // 普通函数   【支持自动类型转换】
}

template<typename T>
void printT(T a, T b)
{
    //
}

int main()
{
    test01();
    return 0;
}
