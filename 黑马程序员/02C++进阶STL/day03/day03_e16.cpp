//
// Created by lionel on 2019/8/24.
//

// 16 vector存取_插入删除_大小操作_rec.

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

void test03()
{
    int arr1[] = {100, 200, 300, 400};
    vector<int> v4(arr1, arr1 + sizeof(arr1) / sizeof(int));

    cout<<"size="<<v4.size()<<endl;
    if(v4.empty())
    {
        cout<<"v4.empty()"<<endl;
    } else
    {
        cout<<"v4.empty(),不空"<<endl;  //输出这个分支
    }

    printVector(v4);
    v4.resize(2);  // 数据变成2，后面的数据就扔掉了
    printVector(v4);
    v4.resize(6); //会添加默认值  v4.resize(6,1）默认值是1
    printVector(v4);

    for(int i=0;i<1000;i++)
    {
        v4.push_back(i);
    }

    cout<<"size:"<<v4.size()<<endl;  // 这个是1006
    cout<<v4.capacity()<<endl;  // 容量； size()是元素的个数  容量是1536
}

//vector存取数据
void test04()
{
    int arr1[] = {100, 200, 300, 400};
    vector<int> v4(arr1, arr1 + sizeof(arr1) / sizeof(int));

    for(int i=0;i<v4.size();i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v4.size();i++)
    {
        cout<<v4.at(i)<<" ";
    }
    cout<<endl;

    //区别：at()抛异常；[]不抛异常

    cout<<"front: "<<v4.front()<<endl;  //返回第1个元素
    cout<<"back: "<<v4.back()<<endl;  //返回最后1个元素
}

//插入与删除
void test05()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    //头插法
    v.insert(v.begin(),30); //30,10,20 第1个元素类型是 迭代器
    //尾插法
    v.insert(v.end(),40); //30,10,20,40

    //往中间插   【支持[]访问的，都支持随机访问】
    v.insert(v.begin()+2,100); // 【vector支持随机访问，所以可以加2，不然只能加1】
    printVector(v);

    //一般情况下：【支持[]访问的，都支持随机访问】
    // 迭代器 可以直接 +2，-3操作

    //删除
    v.erase(v.begin());
    printVector(v);
    v.erase(v.begin()+1,v.end());
    printVector(v);
    v.clear();
    cout<<"size:"<<v.size()<<endl;
}

int main()
{
    //test03();
    //test04();
    test05();
    return 0;
}
