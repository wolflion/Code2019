#pragma once //防止头文件被重复包含
#include<iostream>
#include<string>

using namespace std;

class Person
{
public:
    Person(string name, int age, int id);
    void show();
public:
    string mName;
    int mAge;
    int mID;
};


//ctrl+shift+U 转为大写  VS里的
