//03 MyArray����ʵ��_rec.
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        this->mCapacity = capacity;
        this->mSize = 0;
        //�����ڴ�
        this->pAddr = new T[this->mCapacity];
    }
    MyArray(const MyArray<T>& arr)  // ��������
    {
        this->mSize = arr.mSize;
        this->mCapacity = arr.mcapacity;
        //����������
        this->pAddr= new T[this->mCapacity];
        for(int i=0;i<this->mSize;i++)
        {
            this->pAddr[i]=arr.pAddr[i];
        }
    }

    T& operator[](int index)
    {
        return this->pAddr[index];
    }

    MyArray<T> operator=(const MyArray<T>& arr)
    {
        if(this->pAddr != NULL)
        {
            delete[] this->pAddr;
        }

        this->mSize = arr.mSize;
        this->mCapacity = arr.mcapacity;
        //����������
        this->pAddr= new T[this->mCapacity];
        for(int i=0;i<this->mSize;i++)
        {
            this->pAddr[i]=arr.pAddr[i];
        }

        return *this;  //���ص�ǰ����
    }


    void PushBack(T& data)
    {
        //�ж��������Ƿ�������
        if(this->mSize>=this->mCapacity)
        {
            return ;
        }
        // ����ŵ��Ƕ���=�Ų�������Ҫ������
        //1�� ����Ԫ�ر����ܹ�������
        //2��������data�Ŀ����Ž�ȥ��  ����������ֵ���壬�����������塿������Ķ���Ԫ�صĿ����ݣ�������Ԫ�ر���
        //3��Ԫ�س�Ա��ָ�룬ע�������ǳ����������
        this->pAddr[this->mSize] = data;   // �������õ�=�������������ǿ������죬���� =��������
        //mSize++
        this->mSize++;
    }

    // ����ֵȡ����  ��������PushBack��
    void PushBack(T&& data)
    {
        //�ж��������Ƿ�������
        if(this->mSize>=this->mCapacity)
        {
            return ;
        }
        this->pAddr[this->mSize] = data;
        //mSize++
        this->mSize++;
    }

    ~MyArray()
    {
        if(this->pAddr != NULL)
        {
            delete[] this->pAddr;
        }
    }

public:
    // һ���������¶��ٸ�Ԫ��
    int mCapacity;
    // ��ǰ�����ж���Ԫ��
    int mSize;
    // �������ݵ��׵�ַ
    T* pAddr;
};


void test01()
{
    MyArray<int> mArray(20);
    int a = 10,b=20,c=30,d=40;
    mArray.PushBack(a);
    mArray.PushBack(b);
    mArray.PushBack(c);
    mArray.PushBack(d);  // ���������ã�ֱ��mArray.PushBack(100)����

    //������ֵȡ���ã� ��ֵ �����ڶ���ʹ��
    // ��ֵ һ�� ����ʱ������ֻ�ܵ�ǰ��ʹ��

    // &&������ֵ����  C++11�ı�׼
    mArray.PushBack(100);
    mArray.PushBack(200);
    mArray.PushBack(300);

    for(int i=0;i<mArray.mSize;i++)
    {
        cout<<mArray[i]<<" ";
    }
    cout<<endl;
}

class Person{};
void test02()
{
    Person p1,p2;
    MyArray<Person> arr(10);
    arr.PushBack(p1);   //p1�Ǹ�����󣬷ǻ���������  ������ŵ���ָ�룬����ǳ���ơ�
    arr.PushBack(p2);
}

int main()
{
    test01();
    test02();
    return 0;
}
