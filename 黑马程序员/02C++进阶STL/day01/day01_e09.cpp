//09 ��ͨ���.h��.cpp�����д��ʽ_rec.
#include "day01_e09.h"

Person::Person(string name,int age, int id)
{
    this->mName = name;
    this->mAge = age;
    this->mID = id;
}

void Person::show()
{
    cout<<this->mName<<","<<this->mAge<<","<<this->mID<<endl;
}


//�ɵ���дһ��main����ں���
int main()
{
    Person s("test",10,20);
    s.show();
    return 0;
}
