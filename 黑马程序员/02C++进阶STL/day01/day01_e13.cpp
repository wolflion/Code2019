//13 ��ģ��h��cpp�����д����_rec

#include"day01_e13.h"

template<typename T>
Person<T>::Person(T age)
{
    this->mAge = age;
}

template<typename T>
void Person<T>::Show()  // ��ģ�� Ҫ��<T>���������Ĳ���
{
    cout<<mAge<<endl;
}

#if 0
//���mainҲ���Ե�����һ�ļ�
int main()
{
    Person<int> a(10);
    a.Show();
    return 0;
}
#endif
