//09 普通类的.h和.cpp分离编写方式_rec.
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


//可单独写一个main的入口函数
int main()
{
    Person s("test",10,20);
    s.show();
    return 0;
}
