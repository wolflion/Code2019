//04 ������̲���_rec.


#include<iostream>
using namespace std;

#define MAX 1024

int main()
{
    cout<<MAX<<endl;
    return 0;
}


/*
ESc  ��3������
g++ -E index.cpp -o index.i   //ǰ�涼�� ͷ�ļ����滻 ����define Ҳ���滻��
g++ -S index.i -o index.s     // ����
g++ -c index.s -o index.o     // ��࣬������Ŀ���ļ�

g++ index.s -o index          // ����  file index �����ļ�����
*/
