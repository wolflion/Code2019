//08 ��ģ��������ͨ��_��ģ��������ģ��_rec.

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
    T m_Age;// m_��Ա����
};

//������ඨ�����,��Ҫ�����������ڴ�,ֻ��ȷ��������,��֪���÷������
class SubPerson:public Person<int>  // ��ʽָ��
{

};

#if 0
// ��ģ�� �̳���ģ��
template<typename T>
class A:public Person<int>   //����ôд ������Ҳû�б���
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
class Cat:public Animal<T> // ���ﲻ��Ҫ�þ�������  [�õ���Animal��T]
{

};

int main()
{
    return 0;
}
