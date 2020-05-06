//04 类型转换基本语法_rec.

/*
C语言不作类型检查
CPP在类型转换时，要做类型检查

static_cast()  //基础数据类型转换，指针
const_cast()   //指针、引用、去const

*/


#include<iostream>
using namespace std;

//static_cast
void test01()
{
    int a = 10;
    char c = static_cast<char>(a);
    cout<<a<<endl;
    cout<<c<<endl;
}


int main(void)
{
    test01();
    return 0;
}
