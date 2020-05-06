//
// Created by lionel on 2019/8/24.
//

//11 内建函数对象_rec.

// 谓词：返回值为bool的函数对象

/*
 * sort里的less<>()是个内建的函数对象
 * */


#include <iostream>
#include <functional>  //内建函数对象
using namespace std;

void test01()
{
    plus<int>myPlus;
    cout<<myPlus(10,20)<<endl;
}

int main()
{
    test01();
    return 0;
}
