//
// Created by lionel on 2019/8/19.
//

//16 set容器常用api_rec.
#include <iostream>
#include <set>
using namespace std;


// set容器初始化
void test01()
{
    set<int> s1;  // 默认从小到大排序
    s1.insert(7);
    s1.insert(2);
    s1.insert(4);
    s1.insert(5);
    s1.insert(1);
    s1.erase(s1.begin()); //传入的位置
    s1.erase(7); //值删除     【删除这两个，结果是245】

    // 【这里要用::】
    for(set<int>::iterator it = s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<endl;
    }

    //赋值操作
    set<int>s2;
    s2=s1;
}

void test02()
{
    // 实值
    set<int> s1;
    s1.insert(7);
    s1.insert(2);
    s1.insert(4);
    s1.insert(5);
    s1.insert(1);

    set<int>::iterator ret = s1.find(4); //值查找，返回该键的迭代器
    if(ret == s1.end())
    {
        cout<<"Not Found!"<<endl;
    }
    else
        cout<<"*ret="<<*ret<<endl;

    // low_bound(keyElem); // 第1个大于等于 keyElem 的迭代器的位置【先等于】

    set<int>::iterator ret1 = s1.lower_bound(2); //值查找，返回该键的迭代器
    if(ret1 == s1.end())
    {
        cout<<"Not Found!"<<endl;
    }
    else
        cout<<"*ret="<<*ret1<<endl;  //2

    // uper_bound(keyElem)  // 大于keyElem的迭代器的位置
    set<int>::iterator ret2 = s1.upper_bound(2); //值查找，返回该键的迭代器
    if(ret2 == s1.end())
    {
        cout<<"Not Found!"<<endl;
    }
    else
        cout<<"*ret="<<*ret2<<endl;//4

    //equal_range返回 lower_bound和upper_bound的值
    pair<set<int>::iterator,set<int>::iterator> ret3 = s1.equal_range(2); //值查找，返回该键的迭代器
    if(ret3.first == s1.end())
    {
        cout<<"Not Found!"<<endl;
    }
    else
        cout<<"found "<<*(ret3.first)<<endl;

    if(ret3.second == s1.end())
    {
        cout<<"Not Found!"<<endl;
    }
    else
        cout<<"found "<<*(ret3.second)<<endl;
}

int main()
{
    test01();
    test02();
    return 0;
}