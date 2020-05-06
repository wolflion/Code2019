//
// Created by lionel on 2019/8/18.
//

//10 栈解旋_rec.  【unwinding】

#include <iostream>
using namespace std;

class Person{
public:
    Person()
    {
        cout<<"Person construct"<<endl;
    }
    ~Person()
    {
        cout<<"Person destructor"<<endl;
    }
};

int divide(int x, int y)
{
    Person p1,p2;
    if(y==0)
        throw  y;
    return x/y;
}

void test01()
{
    try {
        divide(10,0);  //只要发生异常，person的p1,p2自动会被析构掉
    }catch(int e)
    {
        cout<<"error caused by"<<e<<endl;
    }
}

int main()
{
    test01();
    return 0;
}

/*
 * Person construct
Person construct
Person destructor
Person destructor
error caused by0
 * */