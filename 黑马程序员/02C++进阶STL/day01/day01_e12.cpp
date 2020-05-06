//12 ��ģ������ʵ��_ģ������ʹ����Ԫ1_rec.
//12 ��ģ������ʵ��_ģ������ʹ����Ԫ2_rec.

#include<iostream>
using namespace std;

template<class T> class Person;
template<class T> void PrintPerson(Person<T>& p);

template<typename T>
class Person
{
public:
    //template<typename T>  // windows����û���⣻g++����������
    // undefined reference to `operator<<(std::ostream&, Person<int>&)'|
    //friend ostream& operator<<(ostream& os, Person<T>& p);  // friend��ȫ�ֵ�
    // g++��д��
    //friend ostream& operator<<<T>(ostream& os, Person<T>& p);  // friend��ȫ�ֵ�
    Person(T age, T id);
    void show();

    //friend void PrintPerson(Person<T>& p);  // ����д����ֻ����ͨ����Ԫ
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
//��ͱ���˲�һ���Ķ���
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
H:\00Ҫѧϰ��\C++����STL\day01\3_��Ƶ\day01_e12.cpp|31|error: invalid use of template-name 'Person' without an argument list|
H:\00Ҫѧϰ��\C++����STL\day01\3_��Ƶ\day01_e12.cpp|38|error: 'template<class T> class Person' used without template parameters|
H:\00Ҫѧϰ��\C++����STL\day01\3_��Ƶ\day01_e12.cpp||In function 'void show()':|
H:\00Ҫѧϰ��\C++����STL\day01\3_��Ƶ\day01_e12.cpp|40|error: 'mAge' was not declared in this scope|
H:\00Ҫѧϰ��\C++����STL\day01\3_��Ƶ\day01_e12.cpp|40|error: 'mID' was not declared in this scope|
||=== Build failed: 4 error(s), 0 warning(s) (0 minute(s), 1 second(s)) ===|
*/
