//06 类模板基本语法_rec.

#include<iostream>
using namespace std;

template<typename T>

// 我自已写的
#if 0
class A
{
public:
    T MyAdd(T a, T b)
    {
        return a+b;
    }
private:
    T a;
    T b;
};
#endif // 0

class Person
{
public:
    Person(T id, T age)
    {
        this->mId = id;
        this->mAge = age;
    }

    void show()
    {
        cout<<mId<<","<<mAge<<endl;
    }
//private:
public:
    T mId;
    T mAge;
};

void test01()
{
    Person<int> a(1,20) ;  //类模板必须显式指定类型  【函数模板才类型推导】
    a.show();
}


int main()
{
    test01();
    return 0;
}
