//
// Created by lionel on 2019/9/12.
//

// set不允许重复，会排序，会过滤掉重复的值，不会报错
// multiset允许插入重复值
// 不能修改，只能删除后，再重新插入

#include <iostream>
#include <set>
using namespace std;

template <typename Container>   // 声明时也要用template？  【lionel】
void PrintContents(const Container& c);


// insert()和count()
void test01()
{
    set<int> a;
    multiset<int> ma;

    a.insert(60);
    a.insert(-1);
    a.insert(3000);

    cout<<"显示set里面的数据："<<endl;
    set<int>::const_iterator i = a.begin();
    while(i != a.end())
    {
        cout<<*i<<endl;
        ++i;
    }
    //a也有count
    cout<<a.count(3000)<<endl; //只会0或1.

    // 允许插入重复值
    ma.insert(3000);
    ma.insert(a.begin(),a.end());
    ma.insert(3000);

    //计算ma里有几个3000
    cout<<"有几个3000："<<ma.count(3000)<<endl;

    cout<<"显示multiset里面的数据："<<endl;
    PrintContents(a);

    multiset<int>::const_iterator ima = ma.begin();
    while(ima != ma.end())
    {
        cout<<*ima<<endl;
        ++ima;
    }
}


// find()
typedef  set<int> SETINT; //可以用别名
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

    SETINT::iterator i_found = a.find(178);  // find返回的是个迭代器
    if(i_found != a.end())
        cout<<*i_found<<"找到了!"<<endl;
    else
        // VS下会报错
        //cout<<"没找到："<<*i_found<<endl;  // 没找到会指向最后一个数据的下一个位置
        cout<<"没找到："<<endl;
}

// 删除erease()
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
    cout<<"multiset里有"<<a.size()<<"个数据."<<endl;
    cout<<"每一个数据是:"<<endl;
    for(i=a.begin();i!=a.end();++i)
        cout<<*i<<endl;

    cout<<"要删除的数据是：";
    int nNumberToErase = 0;
    cin>>nNumberToErase;
    a.erase(nNumberToErase);  // 删除

    cout<<"删除后的每一个数据是:"<<endl;
    cout<<"multiset里有"<<a.size()<<"个数据."<<endl;
    for(i=a.begin();i!=a.end();++i)
        cout<<*i<<endl;

    //a.clear()  // 是清空所有的
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
    typename Container::const_iterator it = c.begin(); // gcc这个要加typename关键字
    while(it!=c.end())
    {
        cout<<*it<<endl;
        ++it;
    }
    cout<<endl;
}
