//STL是通过重载类中的operator函数实现函数对象功能的

// 6.1 简介

// 6.1.1 为何引入函数对象
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int sum = 0;
void f(int n)
{
    sum += n;
}

#if 0
int main()  //原来用的是void
{
    vector<int>v;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }

    for_each(v.begin(),v.end(),f);
    cout<<sum<<endl;
    system("pause");
    return 0;
}
#endif

void test01()
{
    vector<int>v;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }

    for_each(v.begin(),v.end(),f);
    cout<<sum<<endl;
}


// 6.1.2 函数对象分类
// 函数对象重载了operator()的类的一个实例，operator()参数个数为0，1，2个加以划分（发生器、一元函数、二元函数）

// 6.1.3 简单示例
// e6_1.cpp，例6.1 求整型向量各元素之和
class CSum
{
public:
    CSum(){sum = 0;}
    void operator()(int n)
    {
        sum += n;
    }
    int GetSum() {return sum;}
private:
    int sum;
};

void test02()
{
    vector<int>v;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }
    CSum sObj = for_each(v.begin(),v.end(),CSum());  // 这个返回对象是个类对象？
    cout<<sObj.GetSum()<<endl;
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
