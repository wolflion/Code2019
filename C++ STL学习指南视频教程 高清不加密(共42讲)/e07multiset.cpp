//
// Created by lionel on 2019/9/12.
//

// set�������ظ��������򣬻���˵��ظ���ֵ�����ᱨ��
// multiset��������ظ�ֵ
// �����޸ģ�ֻ��ɾ���������²���

#include <iostream>
#include <set>
using namespace std;

template <typename Container>   // ����ʱҲҪ��template��  ��lionel��
void PrintContents(const Container& c);


// insert()��count()
void test01()
{
    set<int> a;
    multiset<int> ma;

    a.insert(60);
    a.insert(-1);
    a.insert(3000);

    cout<<"��ʾset��������ݣ�"<<endl;
    set<int>::const_iterator i = a.begin();
    while(i != a.end())
    {
        cout<<*i<<endl;
        ++i;
    }
    //aҲ��count
    cout<<a.count(3000)<<endl; //ֻ��0��1.

    // ��������ظ�ֵ
    ma.insert(3000);
    ma.insert(a.begin(),a.end());
    ma.insert(3000);

    //����ma���м���3000
    cout<<"�м���3000��"<<ma.count(3000)<<endl;

    cout<<"��ʾmultiset��������ݣ�"<<endl;
    PrintContents(a);

    multiset<int>::const_iterator ima = ma.begin();
    while(ima != ma.end())
    {
        cout<<*ima<<endl;
        ++ima;
    }
}


// find()
typedef  set<int> SETINT; //�����ñ���
void test02()
{
    set<int> a;
    a.insert(43);
    a.insert(78);
    a.insert(-1);
    a.insert(124);

    SETINT::const_iterator i;
    for(i=a.begin();i!=a.end();++i)
        cout<<*i<<endl;

    SETINT::iterator i_found = a.find(178);  // find���ص��Ǹ�������
    if(i_found != a.end())
        cout<<*i_found<<"�ҵ���!"<<endl;
    else
        // VS�»ᱨ��
        //cout<<"û�ҵ���"<<*i_found<<endl;  // û�ҵ���ָ�����һ�����ݵ���һ��λ��
        cout<<"û�ҵ���"<<endl;
}

// ɾ��erease()
typedef  multiset<int> MSETINT;
void test03()
{
    MSETINT a;
    a.insert(43);
    a.insert(78);
    a.insert(78);
    a.insert(-1);
    a.insert(124);

    MSETINT::const_iterator i;
    cout<<"multiset����"<<a.size()<<"������."<<endl;
    cout<<"ÿһ��������:"<<endl;
    for(i=a.begin();i!=a.end();++i)
        cout<<*i<<endl;

    cout<<"Ҫɾ���������ǣ�";
    int nNumberToErase = 0;
    cin>>nNumberToErase;
    a.erase(nNumberToErase);  // ɾ��

    cout<<"ɾ�����ÿһ��������:"<<endl;
    cout<<"multiset����"<<a.size()<<"������."<<endl;
    for(i=a.begin();i!=a.end();++i)
        cout<<*i<<endl;

    //a.clear()  // ��������е�
}

int main()
{
    test03();
    //test02();
    //test01();
    return 0;
}


template <typename Container>
void PrintContents(const Container& c)
{
    typename Container::const_iterator it = c.begin(); // gcc���Ҫ��typename�ؼ���
    while(it!=c.end())
    {
        cout<<*it<<endl;
        ++it;
    }
    cout<<endl;
}
