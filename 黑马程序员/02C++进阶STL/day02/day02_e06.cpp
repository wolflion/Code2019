//06 ����ת�� const_cat��reinterpret_cat_rec.
#include<iostream>
using namespace std;

// const_castָ�� ���� ���߶���ָ��

void test03()
{
    // 1��������������
    int a = 10;
    const int& b = a;  // b=20;�ᱨ�������޸�
    int& c = const_cast<int&>(b);
    c=20;
    cout<<a<<endl;  //����20�ˡ�

    // 2��ָ��
    const int *p = NULL;
    //const int*&
    int *p2 = const_cast<int*>(p);

    int *p3 = NULL;
    const int *p4 = const_cast<const int*>(p3);
    // ���ӻ�ȥ������const��  �����Ƕ�ԭ�еı���������
}

class Building{};
class Animal{};
// reinterpret_castǿ������ת�����κ����͵�ָ�룬����ת��

typedef void(FUNC)(int,int);  //typedef void(*FUNC)
typedef int(FUNC2)(int,char*);
void test04()
{
    // 1���޹�����ת��
    Building* build = NULL;
    Animal *ani = reinterpret_cast<Animal*>(build);

    // 2������ָ��ת��
    FUNC* func1;
    FUNC2* func2 = reinterpret_cast<FUNC2*>(func1);
}

int main()
{
    test03();
    return 0;
}
