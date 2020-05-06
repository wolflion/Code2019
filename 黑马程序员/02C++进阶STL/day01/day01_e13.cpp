//13 类模板h和cpp分离编写分析_rec

#include"day01_e13.h"

template<typename T>
Person<T>::Person(T age)
{
    this->mAge = age;
}

template<typename T>
void Person<T>::Show()  // 类模板 要有<T>，传入具体的参数
{
    cout<<mAge<<endl;
}

#if 0
//这个main也可以当个单一文件
int main()
{
    Person<int> a(10);
    a.Show();
    return 0;
}
#endif
