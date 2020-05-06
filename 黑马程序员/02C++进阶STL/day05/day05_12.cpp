//
// Created by lionel on 2019/8/24.
//

//12 bind1st_bind2nd绑定适配器_rec.

// 【绑定适配器：就是把两个参数，绑定为1个参数】

#include <iostream>
//#include <functional>
#include <algorithm>
#include <vector>
using  namespace std;

struct MyPrint
{
    void operator()(int v)
    {
        cout<<v+100<<" ";  // 这里可以都加100
    }
};

// 不同的加数，得单独写一个
struct MyPrint2
{
    void operator()(int v)
    {
        cout<<v+200<<" ";  // 这里可以都加200
    }
};

struct MyPrint3:public binary_function<int,int,void> //两个参数的类型，返回值类型
{
    void operator()(int v, int val) const //这里要加const
    {
        cout<<v+val<<" ";  // 这里可以都加100
    }
};

// 仿函数适配器
void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    //也可以定义个对象 MyPrint my;
    //for_each(v.begin(),v.end(),MyPrint());  //可以匿名对象
    for_each(v.begin(),v.end(),bind2nd(MyPrint3(),200));

    // bind1st和bind2nd的区别
    // 【bind1st，将addNum绑定为函数对象的第一个参数】
    // 【bind2nd，将addNum绑定为函数对象的第2个参数】
    for_each(v.begin(),v.end(),bind1st(MyPrint3(),200));
}

int main()
{
    test01();
    return 0;
}

