//04 ����ת�������﷨_rec.

/*
C���Բ������ͼ��
CPP������ת��ʱ��Ҫ�����ͼ��

static_cast()  //������������ת����ָ��
const_cast()   //ָ�롢���á�ȥconst

*/


#include<iostream>
using namespace std;

//static_cast
void test01()
{
    int a = 10;
    char c = static_cast<char>(a);
    cout<<a<<endl;
    cout<<c<<endl;
}


int main(void)
{
    test01();
    return 0;
}
