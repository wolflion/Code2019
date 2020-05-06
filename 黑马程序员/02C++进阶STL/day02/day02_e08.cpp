//08 异常基本语法_rec.
#include<iostream>
using namespace std;


//异常基本语法
int divide(int x, int y)
{
    if(y == 0)
    {
        throw y;
    }

    return x/y;
}


void test01()
{
    // 捕获异常
    try
    {
        divide(10,0);
    }
    // 异常时根据类型进行匹配
    catch(int e){  // 【通过 类型匹配】，还可以拿到e
        cout<<"除数为0!"<<e<<endl;
    }

}

void CallDivide(int x, int y)
{
    divide(x,y);
}


void test02()
{
    try
    {
        CallDivide(10,0);   // 这个也被异常捕获了
        // 【出错了，会一直往上抛，如果到main都没有处理，这个时候程序会挂掉】 terminate()函数
        // C++异常机制，是跨函数的；C++异常是必须处理的
    }
    catch(int e)
    {
        cout<<"error cause by"<<e<<endl;
    }
}

int main()
{
    test01();
    test02();
    return 0;
}
