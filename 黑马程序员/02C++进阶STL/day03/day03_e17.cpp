//
// Created by lionel on 2019/8/24.
//

//17 巧用swap收缩vector空间_rec.

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v)
{
    for(vector<int>::iterator it = v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test06()
{
    //vector添加元素 他会自动增长，删除元素时，会自动减少吗？【不会】

    // 内存收缩
    vector<int>v;
    for(int i=0;i<10000;i++)
    {
        v.push_back(i);
    }

    cout<<"size:"<<v.size()<<endl;
    cout<<"capaticy:"<<v.capacity()<<endl;


    v.resize(10);
    cout<<"size:"<<v.size()<<endl;
    cout<<"capaticy:"<<v.capacity()<<endl;

    // 大小变了，capaticy没有变化，就要收缩一下
    vector<int>(v).swap(v);  // 匿名对象与v的交换
    cout<<"size:"<<v.size()<<endl;
    cout<<"capaticy:"<<v.capacity()<<endl;
}

int main()
{
    test06();
    return 0;
}