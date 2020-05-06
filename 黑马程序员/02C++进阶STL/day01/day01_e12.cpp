//12 类模板类外实现_模板类中使用友元1_rec.
//12 类模板类外实现_模板类中使用友元2_rec.

#include<iostream>
using namespace std;

template<class T> class Person;
template<class T> void PrintPerson(Person<T>& p);

template<typename T>
class Person
{
public:
    //template<typename T>  // windows编译没问题；g++编译有问题
    // undefined reference to `operator<<(std::ostream&, Person<int>&)'|
    //friend ostream& operator<<(ostream& os, Person<T>& p);  // friend是全局的
    // g++的写法
    //friend ostream& operator<<<T>(ostream& os, Person<T>& p);  // friend是全局的
    Person(T age, T id);
    void show();

    //friend void PrintPerson(Person<T>& p);  // 这种写法，只是普通的友元
    friend void PrintPerson<T>(Person<T>& p);
    #if 0
    Person(T age, T id);
    {
        this->mAge = age;
        this->mID = id;
    }
    void show()
    {
        cout<<mAge<<","<<mID<<endl;
    }
    #endif // 0

public:
    T mAge;
    T mID;
};

template<typename T>
Person<T>::Person(T age, T id)  //invalid use of template-name 'Person' without an argument list|
    {
        this->mAge = age;
        this->mID = id;
    }

template<typename T>
    void Person<T>::show()
    {
        cout<<mAge<<","<<mID<<endl;
    }

    #if 0
//这就变成了不一样的东西
template<typename T>
ostream& operator<<(ostream& os, Person<T>& p)
{
    os<<p.mAge<<p.mID<<endl;
    return os;
}
#endif // 0


template<typename T>
void Person<T>::PrintPerson<T><T>(Person<T>& p)
{
    cout<<p.mAge<<p.mID<<endl;
}

void test01()
{
    Person<int> p(10,20);
    //p.show();
    //cout<<p;
    PrintPerson(p);
}

int main()
{
    test01();

    return 0;
}

/*
//||=== Build file: "no target" in "no project" (compiler: unknown) ===|
H:\00要学习的\C++进阶STL\day01\3_视频\day01_e12.cpp|31|error: invalid use of template-name 'Person' without an argument list|
H:\00要学习的\C++进阶STL\day01\3_视频\day01_e12.cpp|38|error: 'template<class T> class Person' used without template parameters|
H:\00要学习的\C++进阶STL\day01\3_视频\day01_e12.cpp||In function 'void show()':|
H:\00要学习的\C++进阶STL\day01\3_视频\day01_e12.cpp|40|error: 'mAge' was not declared in this scope|
H:\00要学习的\C++进阶STL\day01\3_视频\day01_e12.cpp|40|error: 'mID' was not declared in this scope|
||=== Build failed: 4 error(s), 0 warning(s) (0 minute(s), 1 second(s)) ===|
*/
