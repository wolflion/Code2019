//05 ģ�庯��ʵ��ԭ������_rec.

/*
������ģ��--�������������--���ܴ�������


����ģ��-->Ҫ��������ĺ��������ܽ��е���

������ģ�塿--�ص���ģ�壬������T��
��ģ�庯����--�ص��Ǻ����������Ǿ����float��int����

*/
#include <iostream>
using namespace std;

// ����ģ��
template<typename T>
T MyAdd(T a, T b)
{
    return a+b;
}

int main()
{
    int a=10,b=20;
    double da=1.14,db = 2.14;
    MyAdd(a,b);
    MyAdd(da,db);
    //��MyAdd(a,a)����Ҳֻ��ռ��ԭ���� ģ�庯��
    MyAdd(a,a);

    // ������3�Σ���ֻ��2������ԭ��  �鿴vim index.s�ļ���

    return 0;
}

// g++ -S index.cpp -o index.s
// vim index.s  ���ҵ�call�ؼ��֡�iET, dET������������һ��

// ���α��루��1�Σ����뺯��ģ�壻��2�Σ����ݲ�ͬ�ĵ��ã��������ɾ��庯����

