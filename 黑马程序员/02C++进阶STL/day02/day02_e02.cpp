//02 MyArray��ܴ_rec
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
    MyArray(int capacity);
    MyArray(const MyArray<T>& arr);  // ��������
    T& operator[](int index);
    MyArray<T> operator=(const MyArray<T>& arr);
    void PushBack(T& data);
    //void PushBack(T&& data);

public:
    // һ���������¶��ٸ�Ԫ��
    int mCapacity;
    // ��ǰ�����ж���Ԫ��
    int mSize;
    // �������ݵ��׵�ַ
    T* pAddr;
};

int main()
{
    return 0;
}
