//15 ��ģ������static��Ա_rec

/*
static �ؼ��� �� ��ģ��û������ ������Aʱ��staticûʲô�á�

��A����B���� ��ģ����������static����һ���¡�
*/

#include<iostream>
using namespace std;

template<typename T>

class Person
{
public:
    static  int a;
};

template<typename T>
int Person<T>::a = 0; //�����ʼ��

int main(void)
{

    Person<int>p1,p2,p3;
    Person<char>cp1,cp2,cp3;  // ��ģ��ʵ���������Ķ���

    p1.a = 10;
    cp1.a = 100;

    // ˵����������Peron��static��һ�������õ���������е�static��Ա
    cout<<p1.a<<","<<p2.a<<","<<p3.a<<endl; // 10
    cout<<cp1.a<<","<<cp2.a<<","<<cp3.a<<endl; // 100
}
