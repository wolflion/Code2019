//01 ����ģ������﷨_rec   ��ѧ��֪ʶ��Ҫ��һ��֮ǰ�ľ����ԡ�

//#4�����ã����Ҫ��VS������

#include<iostream>
using namespace std;

#if 0
// int�������ݽ���
void MySwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// double�Ļ����ֵ���дһ��  [ֻ�в������Ͳ�һ��������ʵ�ֶ�һ��]
void MySwap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}
#endif // 0

// ģ�弼�������Ͳ���������д������Ժ�������
template<typename T>  //Ϊ���ñ����������� ��ͨ���������� ģ�庯��  ��class��typename������д�����С�
//ֻ�Ժ����1��������Ч��ÿдһ������������Ҫtemplate�������ж��ռλ����
void MySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test0()
{
    //�Զ������Ƶ�
    int a=10,b=20;
    MySwap(a,b);  //���ݸ�����ֵ�������Զ������Ƶ�
    cout<<a<<","<<b<<endl;

    double da = 1.2,db = 2.3;
    MySwap(da,db);
    cout<<da<<","<<db<<endl;

    //��ʽָ������
    MySwap<int>(a,b);   // ����﷨����̫�졾lionel��
}

int main()
{
    test0();
    return 0;
}
