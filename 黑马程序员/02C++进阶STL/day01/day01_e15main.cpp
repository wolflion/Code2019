//如果单独写，就有问题

#include"day01_e13.h"  //.h就有问题，只有.cpp才行

int main()
{
    Person<int> a(10);
    a.Show();
    return 0;
}
