//02 ����ģ�����ͨ����������_����ģ����ù���_rec.
// ���ߵĵ��ù���   �����߶�ƥ��ʱ�����ȵ��ó�Ա������
// ǿ�������ģ�� MyAdd<>(a,b)����


#include<iostream>
using namespace std;

template<typename T>
int MyAdd(T a,T b)    // �൱������  ������ֵ��ͬ  �������ص�������
{
    return a+b;
}

int MyAdd(int a, char c)
{
    return a+c;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c1='a',c2='b';

    cout<<MyAdd(a,c1)<<endl;  // ��Ա����
    cout<<MyAdd(a,b)<<endl;  // ����ģ��       ���ϸ������ƥ�䡿

    cout<<MyAdd(c1,b)<<endl; // ��ͨ����   ��֧���Զ�����ת����
}

template<typename T>
void printT(T a, T b)
{
    //
}

int main()
{
    test01();
    return 0;
}
