//3.4 STL������  ��5����������
// ���롢�����ǰ��˫��������ʡ�  ����ͬ�ĵ���������ĳ������ĳ�����Ч�ʲ�һ����

#include<iostream>
#include<iterator>
using namespace std;

//e3_2.cpp ��3.2 ����istream_iteraotr������������׼������
int main(int argc, char* argv[])
{
    cout<<"���������ݣ��� 111 222 333,):";
    istream_iterator<int>a(cin);  //��������������������istream_iteratorö����������
    istream_iterator<int>b ;   //��������������������
    while(1)
    {
        cout<< *a <<endl; //�����������-> ����operator*()
        a++;    //������ָ��ָ����һ��Ԫ��-> ����operator++(int)
        if(a == b) // �����ǰ���������ڽ�������������->����operator==
        {
            break;   //�˳�whileѭ��
        }
    }

    // ��������������о�����һ��main()��ʵ��һ��
    cout<<"�����������ʾ���Ϊ��";
    ostream_iterator<int>myout(cout,"\t");  //������׼���������
    *myout=1;
    myout++;
    *myout=2;
    myout++;
    *myout=3;

    sytem("pause");
    return 0;
}

