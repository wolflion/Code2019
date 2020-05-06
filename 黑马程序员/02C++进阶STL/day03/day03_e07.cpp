//
// Created by lionel on 2019/8/21.
//

//07 STL容器算法迭代器分离案例_rec.

#include <iostream>
using namespace std;

//算法，负责统计某个元素的个数
int mycount(int* start, int* end, int val)
{
    int num = 0;
    while(start != end)
    {
        if(*start == val)
        {
            num++;
        }
        start++;
    }
    return num;
}

int main()
{
    //数组 容器
    int arr[] = {0,7,5,4,9,2,0};

    // 迭代器
    int *pBegin = arr;  //迭代器开始位置
    int *pEnd = &arr[sizeof(arr)/ sizeof(int)];  // 【取数组最后一个位置】

    int num = mycount(pBegin,pEnd,0);
    cout<<num<<endl;
    return 0;
}