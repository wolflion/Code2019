//
// Created by lionel on 2019/8/23.
//

//13 string�滻_�Ƚ�_�Ӵ�_�����ɾ��_rec.

#include <iostream>
#include <string>
using namespace std;

// string�滻
void test06()
{
    string s = "abcdefg";
    s.replace(0,2,"111"); // ��0��ʼ��ȡ2���ַ����滻��111
    cout<<s<<endl;
}

// string�Ƚ�
void test07()
{
    string s1 = "abcd";
    string s2 = "abce";

    if(s1.compare(s2) == 0)
    {
        cout<<"�ַ������!"<<endl;
    } else
    {
        cout<<"�ַ��������!"<<endl;
    }
}

// �Ӵ�����
void test08()
{
    string s = "abcdefg";
    string s2 = s.substr(1,3);
    cout<<s2<<endl;//bcd
}

//�����ɾ��
void test09()
{
    string s = "abcdefg";
    s.insert(3,"11");  // �����
    cout<<s<<endl;

    s.erase(0,2);
    cout<<s<<endl;
}

int main()
{
    //test06();
    //test07();
    //test08();
    test09();
    return 0;
}

