//03 MyArray函数实现_rec.
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
        //申请内存
        this->pAddr = new T[this->mCapacity];
    }
    MyArray(const MyArray<T>& arr)  // 拷贝构造
    {
        this->mSize = arr.mSize;
        this->mCapacity = arr.mcapacity;
        //拷贝的数据
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
        //拷贝的数据
        this->pAddr= new T[this->mCapacity];
        for(int i=0;i<this->mSize;i++)
        {
            this->pAddr[i]=arr.pAddr[i];
        }

        return *this;  //返回当前对象
    }


    void PushBack(T& data)
    {
        //判断容器中是否有问题
        if(this->mSize>=this->mCapacity)
        {
            return ;
        }
        // 如果放的是对象，=号操作符就要重载了
        //1、 对象元素必须能够被拷贝
        //2、这里是data的拷贝放进去的  【容器都是值语义，而非引用语义】，放入的都是元素的拷贝份，而不是元素本身
        //3、元素成员有指针，注意深拷贝和浅拷贝的问题
        this->pAddr[this->mSize] = data;   // 【这里用的=操作符，调的是拷贝构造，或者 =操作符】
        //mSize++
        this->mSize++;
    }

    // 对右值取引用  【重载了PushBack】
    void PushBack(T&& data)
    {
        //判断容器中是否有问题
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
    // 一共可以容下多少个元素
    int mCapacity;
    // 当前数组有多少元素
    int mSize;
    // 保存数据的首地址
    T* pAddr;
};


void test01()
{
    MyArray<int> mArray(20);
    int a = 10,b=20,c=30,d=40;
    mArray.PushBack(a);
    mArray.PushBack(b);
    mArray.PushBack(c);
    mArray.PushBack(d);  // 这里是引用，直接mArray.PushBack(100)报错

    //不能右值取引用， 左值 可以在多行使用
    // 右值 一般 是临时变量，只能当前行使用

    // &&就是右值引用  C++11的标准
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
    arr.PushBack(p1);   //p1是个类对象，非基础类型了  【如果放的是指针，就是浅复制】
    arr.PushBack(p2);
}

int main()
{
    test01();
    test02();
    return 0;
}
