#include <type_traits>
#include <iostream>
using namespace std;

int i = 1;
int &j = i;
int *p = &i;
const int k = 1;

int e4313main()
{
    decltype(i) & var1 = i;
    decltype(j) & var2 = i;  //�����&��������

    cout<< is_lvalue_reference <decltype(var1)>::value<<endl;  // 1������ֵ����

    cout<< is_rvalue_reference <decltype(var2)>::value<<endl;  // 0��������ֵ����
    cout<< is_lvalue_reference <decltype(var2)>::value<<endl;  // 1������ֵ����

    //decltype(p)* var3 = &i;  // �޷�ͨ������
    decltype(p)* var3 = &p;  // var3��������int**

    auto* v3 = p; // v3��������int*
    v3 = &i;

    const decltype(k) var4 = 1;  //�߳���const��������
// g++ -std=c++11 4-3-13.cpp
}
