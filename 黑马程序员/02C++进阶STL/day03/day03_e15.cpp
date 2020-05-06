//
// Created by lionel on 2019/8/24.
//

//15 vector容器初始化_常用赋值操作_rec.

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

// 初始化
void test01()
{
    vector<int>v1;  //默认构造
    int arr[] = {10,20,30,40};
    vector<int>v2(arr,arr+ sizeof(arr)/sizeof(int));
    vector<int>v3 (v2.begin(),v2.end());
    vector<int>v4(v3);

    //用printVector()替换
    printVector(v4);

#if 0
    for(vector<int>::iterator it = v4.begin(); it!=v4.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
#endif
}

// 常用赋值操作
void test02()
{
    int arr[] = {10,20,30,40};
    vector<int>v1(arr,arr+ sizeof(arr)/sizeof(int));//默认构造

    vector<int> v2;
    v2.assign(v1.begin(),v1.end());

    printVector(v2);

    //重载=
    vector<int> v3;
    v3 = v2;
    printVector(v3);

    printVector(v1);
    // swap交换两个容器的值
    int arr1[] = {100,200,300,400};
    vector<int>v4(arr1,arr1+ sizeof(arr1)/sizeof(int));
    v4.swap(v1);
    printVector(v1); // 100  200 300 400
    printVector(v4); // 10 20 30 40

    //类有指针，维护了指向的内存空间；现在的swap，就是交换了一下指针指向而已，数据没有拷贝
}

int main()
{
    //test01();
    test02();
    return 0;
}