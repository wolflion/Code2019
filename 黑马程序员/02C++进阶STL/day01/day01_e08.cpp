//08 类模板派生普通类_类模板派生类模板_rec.

#include<iostream>
using namespace std;

template<typename T>
class Person
{
public:
    Person()
    {
        this->m_Age = 0;
    }
public:
    T m_Age;// m_成员函数
};

//拿这个类定义对象,需要编译器分配内存,只有确定的类型,才知道该分配多少
class SubPerson:public Person<int>  // 显式指定
{

};

#if 0
// 类模板 继承类模板
template<typename T>
class A:public Person<int>   //我这么写 编译器也没有报错
{
};
#endif // 0


template<typename T>
class Animal
{
public:
    void Jiao()
    {
        cout<<mAge<<" animal is Jiao"<<endl;
    }
public:
    T mAge;
};

template<typename T>
class Cat:public Animal<T> // 这里不需要用具体类型  [用的是Animal的T]
{

};

int main()
{
    return 0;
}
