//
// Created by lionel on 2019/8/18.
//

//12 异常类型_rec.

#include <iostream>
#include <string.h>
using namespace std;

void func()
{
    throw 1;  // 抛出int类型异常
}

void func1()
{
    throw "exception";  // 抛出string异常
}

class MyException   //【可以理解为异常类】
{
public:
    MyException(char *str)
    {
        error = new char[strlen(str)+1];
        strcpy(error,str);
    }
    void what()
    {
        cout<<"未知异常！"<<endl;
    }
    ~MyException()
    {
        if(error!=NULL)
            delete[] error;
    }
public:
    char* error;
};

void fun03()
{
    //throw MyException();  //生成一个匿名对象，然后抛出去
    throw MyException("self"); 
}


void test01()
{
    try {
        func();
    }
    catch(int e)
    {
        cout<<"int "<<e<<endl;
    }

    try {
        func1();
    }
    //catch(char* e)
    catch(string e)
    {
        cout<<"string "<<e<<endl;
    }

    try {
        fun03();
    }
    catch(MyException e)
    {
        e.what();
    }
}


int main()
{
    test01();
    return 0;
}
