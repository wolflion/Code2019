//2.1编制动态数组的模板类
//#include<stdio.h>
#include<iostream>   //改成这个了
using namespace std;  // 这个也没写
template <class T>
class MyArray
{
public:
    MyArray(int nSize = 3)  // 数组默认总长度是3
    {
        m_pData = new T[nSize];
        m_nTotalSize = nSize;
        m_nValidSize = 0;
    }

    void Add(T value)  // 向m_pData添加数据
    {
        if(m_nValidSize < m_nTotalSize)
        {
            m_pData[m_nValidSize] = value;
            m_nValidSize++;
        }
        else
        {
            T* tmpData = new T[m_nTotalSize];  //原始数据备份
            for(int i=0; i<m_nTotalSize; i++)
            {
                tmpData[i] = m_pData[i];
            }
            delete []m_pData;  // 释放原始数据内存空间
            m_nTotalSize *= 2;
            m_pData = new T[m_nTotalSize];
            for(int i=0;i<m_nValidSize;i++)
            {
                m_pData[i] = tmpData[i];
            }
            delete []tmpData;
            m_pData[m_nValidSize] = value;
            m_nValidSize++;
        }
    }

    int GetSize()
    {
        return m_nValidSize;
    }

    T Get(int pos)  // 返回某一位置元素
    {
        return m_pData[pos];
    }

    virtual ~MyArray()
    {
        if(m_pData != NULL)
        {
            delete []m_pData;
            m_pData = NULL;
        }
    }

private:                           // 我把private的放在后面了
    int m_nTotalSize;
    int m_nValidSize;
    T* m_pData;     // 数据
};

int main(int argc, char* argv[])
{
    MyArray<int> obj;
    obj.Add(1);
    obj.Add(2);
    obj.Add(3);
    obj.Add(4);
    for(int i=0; i<obj.GetSize();i++)
    {
        //print("%d\n", obj.Get(i));
        cout << obj.Get(i) << endl;
    }
	system("pause");
    return 0;
}


//2.2  编制一个数组元素求和的函数模板
int sum(int data[], int nSize)
{
    int sum = 0;
    for(int i=0;i<nSize;i++)
    {
        sum += data[i];
    }
    return sum;
}

template<class T>
T sum(T data[], int nSize)
{
    T sum = 0;
    for(int i= 0;i < nSize;i++)
    {
        sum+=data[i];
    }
    return sum;
}
