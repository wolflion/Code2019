#include<typeinfo>
#include<iostream>
using namespace std;

int e432main()
{
    int i;
    decltype(i) j = 0;
    cout<<typeid(j).name()<<endl; // ��ӡ����i����g++��ʾint

    float a;
    double b;
    decltype(a+b) c;
    cout<<typeid(c).name()<<endl;  // ��ӡ����d����g++��ʾdouble

    //g++ -std=c++11 4-3-2.cpp
}


