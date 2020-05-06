//
// Created by lionel on 2019/8/24.
//

//07 容器元素深拷贝和浅拷贝问题_rec.

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class Person
{
public:
    Person(char* name, int age)
    {
        this->pName = new char[strlen(name)+1];
        strcpy(this->pName,name);
        this->mAge = age;
    }

//多写了拷贝构造，g++下两个都没有core啊。
    Person(const Person& p)
    {
        this->pName = new char[strlen(p.pName)+1];
        strcpy(this->pName,p.pName);
        this->mAge = p.mAge;
    }

    Person&operator=(const Person& p)
    {
        if(this->pName != NULL)
        {
            delete[] this->pName;
        }

        this->pName = new char[strlen(p.pName)+1];
        strcpy(this->pName,p.pName);
        this->mAge = p.mAge;

        return *this;
    }

    ~Person()
    {
        if(this->pName != NULL)
        {
            delete[] this->pName;
        }
    }
public:
    char* pName;
    int mAge;
};

void test01()
{
    Person p("aaa",20);
    vector<Person> vPerson;
    vPerson.push_back(p);  // 这里只是拷贝，多一次次析构了
}

int main()
{
    test01();
    return 0;
}