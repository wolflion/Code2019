//02 MyArray框架搭建_rec
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
    MyArray(int capacity);
    MyArray(const MyArray<T>& arr);  // 拷贝构造
    T& operator[](int index);
    MyArray<T> operator=(const MyArray<T>& arr);
    void PushBack(T& data);
    //void PushBack(T&& data);

public:
    // 一共可以容下多少个元素
    int mCapacity;
    // 当前数组有多少元素
    int mSize;
    // 保存数据的首地址
    T* pAddr;
};

int main()
{
    return 0;
}
