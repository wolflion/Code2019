//10 ��ģ������ʵ��_rec.

#include<iostream>
using namespace std;

template<typename T1, typename T2>
class Person
{
public:
    Person(T1 name, T2 age)
    {
        this->mName = name;
        this->mAge = age;
    }

    void show()
    {
        cout<<mName<<","<<mAge<<endl;
    }
public:
    T1 mName;
    T2 mAge;
};

int main()
{
    Person<string,int>  s("test",10); //һ��Ҫ<>ָ������
    s.show();
    return 0;
}
