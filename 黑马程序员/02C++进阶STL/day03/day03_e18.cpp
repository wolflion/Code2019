//
// Created by lionel on 2019/8/24.
//

//18 reserve预留空间提高程序效率_rec.


/*
 *
 * reserv和resize的区别
 *
 *
 * */

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

void test07()
{
    //reserve预留空间，resize区别
    int num = 0;
    int* address = NULL;
    vector<int>v;
    //可以先申请空间
    v.reserve(10000); // 如果你知道大概空间，就可以用reserver预留空间，少了拷贝次数  【num原来是13，现在变成1了】
    for(int i=0;i<10000;i++)
    {
        v.push_back(i);
        if(address != &(v[0]))
        {
            address = &(v[0]);
            num++;
        }
    }
    cout<<"num"<<num<<endl;
}

int main()
{
    test07();
    return 0;
}