#include<iostream>
using namespace std;

template<typename T>
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