//
// Created by lionel on 2019/9/11.
//

// deque可以在数组头或尾删除数据

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque<int> a;
    a.push_back(2);
    a.push_back(4);
    a.push_back(6);

    //在前面加
    a.push_front(1);
    a.push_front(3);
    a.push_front(5);  //这个是最前面的

    for(size_t nCount = 0;nCount<a.size();++nCount)
        cout<<a[nCount]<<endl;   //输出531246

    a.pop_front(); // 从前面删除
    a.pop_back(); //从后面删除

    cout<<"头，尾各删除一个元素："<<endl;
    for(size_t nCount = 0;nCount<a.size();++nCount)
        cout<<a[nCount]<<endl;  // 3124

    cout<<"用迭代器"<<endl;  // 迭代器没有下标，用STL里的算法distance()
    //用迭代器
    deque<int>::iterator it;
    for(it=a.begin();it!=a.end();++it)
    {
        size_t nOffset = distance(a.begin(),it);
        cout<<"a["<< nOffset<<"]="<<*it<<endl;
    }

    return 0;
}

