//08 �쳣�����﷨_rec.
#include<iostream>
using namespace std;


//�쳣�����﷨
int divide(int x, int y)
{
    if(y == 0)
    {
        throw y;
    }

    return x/y;
}


void test01()
{
    // �����쳣
    try
    {
        divide(10,0);
    }
    // �쳣ʱ�������ͽ���ƥ��
    catch(int e){  // ��ͨ�� ����ƥ�䡿���������õ�e
        cout<<"����Ϊ0!"<<e<<endl;
    }

}

void CallDivide(int x, int y)
{
    divide(x,y);
}


void test02()
{
    try
    {
        CallDivide(10,0);   // ���Ҳ���쳣������
        // �������ˣ���һֱ�����ף������main��û�д������ʱ������ҵ��� terminate()����
        // C++�쳣���ƣ��ǿ纯���ģ�C++�쳣�Ǳ��봦���
    }
    catch(int e)
    {
        cout<<"error cause by"<<e<<endl;
    }
}

int main()
{
    test01();
    test02();
    return 0;
}
