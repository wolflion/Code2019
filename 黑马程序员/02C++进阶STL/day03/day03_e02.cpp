//
// Created by lionel on 2019/8/20.
//

//02 C��׼������_rec

#include <iostream>
using namespace std;

//��׼������
void test01()
{
#if 0
    char ch;
    // �س����ǵ������� ��ctrl+C����EOF��
    while(cin.get() != EOF)  // �ӻ����������ݣ���һֱ�ȵ������������ݣ�����**����**��
    {
        cout<<ch<<endl;
    }
#endif

    //cin.get
    char ch2;
    //cin.get(ch2); //��ȡһ���ַ�
    char buf[256] = {0};
    //cin.get(buf,256);  // �ӻ�������һ���ַ���

    cin.getline(buf,256);  // ��һ�����ݣ���\nΪֹ���������з�
    cout<<buf<<endl;
}

//cin.ignore ���Ե�ǰ���ַ�
void test02()
{
    char ch;
    cin.get(ch);//������û�����ݣ����������ȴ�   ������asdf��
    cout<<ch<<endl;  //���a
    cin.ignore(); //����s   �������ԼӲ�����--���������ݾ�û����
    cin.get(ch);
    cout<<ch<<endl; // ���d
}

//cin.peek() ֻ�ǿ���������������
void test03()
{
    cout<<"���������ֻ����ַ�����"<<endl;
    char ch;
    ch = cin.peek();//͵��һ�»����������ص�һ���ַ�
    if(ch >= '0'&& ch<='9')
    {
        int number;
        cin>>number;
        cout<<"������������֣�"<<number<<endl;
    } else
    {
        char buf[256] = {0};
        cin>>buf;
        cout<<"����������ַ�����"<<buf<<endl;
    }
}

// cin.putback
void test04()
{
    cout<<"���������ֻ����ַ�����"<<endl;
    char ch;
    cin.get(ch);  // �ӻ�����ȡ��һ���ַ�
    if(ch>='0'&& ch<='9')
    {
        //ch�Żص�������
        cin.putback(ch);
        int number;
        cin>>number;
        cout<<"������������֣�"<<number<<endl;
    }else
    {
        cin.putback(ch);
        char buf[256] = {0};
        cin>>buf;
        cout<<"����������ַ�����"<<buf<<endl;
    }
}

int main()
{
    //test01();
    //test02();
    //test03();
    test04();
    return 0;
}