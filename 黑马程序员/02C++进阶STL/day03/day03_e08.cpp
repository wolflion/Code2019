//
// Created by lionel on 2019/8/23.
//

// 08 STL hello world程序_rec.

#include <iostream>
#include <vector>  //动态数组 可变数组
#include <algorithm>  // 算法 【就是函数】
using namespace std;

void PrintVector(int v)
{
    cout<<v<<endl;
}

// stl基本语法
void test01()
{
    vector<int> v;     // 模板的话，就要加 模板参数  【定义了一个容器，并指定容器元素存放的类型】
    v.push_back(10);  // 容器要有增，删，查
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 通过STL提供的for_each算法
    // begin是第1个数据
    vector<int>::iterator pStart;   // 容器提供迭代器  = v.begin()
    // end是最后一个数据的下一个位置
    vector<int>::iterator pEnd;
    //v.begin返回值是 迭代器
    for_each(v.begin(),v.end(),PrintVector);  // 这里面需要一个回调，也就是仿函数，函数对象
}

// 容器也可以存放自定义的数据类型
class Person
{
public:
    Person(int age,int id):m_age(age),m_id(id){}
public:
    int m_age;
    int m_id;
};

void test02()
{
    // 指定容器的元素类型是 Person类型的
    vector<Person> v;
    Person p1(10,20),p2(30,40),p3(50,60);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    // 遍历，不用for_each
    vector<Person>::iterator itPerson;
    for(itPerson = v.begin();itPerson!=v.end();itPerson++)
    {
        cout<<(*itPerson).m_age<<" "<<(*itPerson).m_id<<endl;
    }
}


int main()
{
    //test01();
    test02();
    return 0;
}

// 新的例子
// 存放Person类型的指针，调用for_each指针，或者for_each()打印