//2.1���ƶ�̬�����ģ����
//#include<stdio.h>
#include<iostream>   //�ĳ������
using namespace std;  // ���Ҳûд
template <class T>
class MyArray
{
public:
    MyArray(int nSize = 3)  // ����Ĭ���ܳ�����3
    {
        m_pData = new T[nSize];
        m_nTotalSize = nSize;
        m_nValidSize = 0;
    }

    void Add(T value)  // ��m_pData�������
    {
        if(m_nValidSize < m_nTotalSize)
        {
            m_pData[m_nValidSize] = value;
            m_nValidSize++;
        }
        else
        {
            T* tmpData = new T[m_nTotalSize];  //ԭʼ���ݱ���
            for(int i=0; i<m_nTotalSize; i++)
            {
                tmpData[i] = m_pData[i];
            }
            delete []m_pData;  // �ͷ�ԭʼ�����ڴ�ռ�
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

    T Get(int pos)  // ����ĳһλ��Ԫ��
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

private:                           // �Ұ�private�ķ��ں�����
    int m_nTotalSize;
    int m_nValidSize;
    T* m_pData;     // ����
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


//2.2  ����һ������Ԫ����͵ĺ���ģ��
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
