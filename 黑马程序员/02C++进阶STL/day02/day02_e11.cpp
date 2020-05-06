//
// Created by lionel on 2019/8/18.
//

//11 异常接口声明_rec.   【写出所有相关的错误类型】

#include <iostream>
using  namespace std;

//异常接口，（只能抛出定义的3种）
void func()
throw(int,float,char)
{

    // throw "abc";  //g++执行，挂掉了  【VS好像没有】
    throw 1;
}

//不能抛出任何异常
void func02() throw()
{
    throw -1;
}

//可以抛出任何类型异常
void func03()
{
    throw 1;
}


int main()
{
    try {
        //func();
        //func02();  // 这个也挂了
        func03();
    }
    catch (char* str)
    {
        cout<<"test"<<str<<endl;
    }
    catch (int e)
    {
        cout<<"int"<<e<<endl;
    }
    catch (...)
    {
        cout<<"未知类型异常"<<endl;
    }

    return  0;
}
