//04 ����ת�������﷨_rec.

/*
C���Բ������ͼ��
CPP������ת��ʱ��Ҫ�����ͼ��

static_cast()  //������������ת����ָ��
const_cast()   //ָ�롢���á�ȥconst

*/


#include<iostream>
using namespace std;


class Building{};
class Animal{};
class Cat::public Animal
{
    //
};

//static_cast
void test01()
{
    int a = 100;
    char c = static_cast<char>(a);  // 10�����Ӧ���ǲ��Ǿ��� �� ��
    cout<<a<<endl;
    cout<<c<<endl;

    // ��Щ����ת
    #if 0
    //������������ָ��
    int *p = NULL;
    char *sp = static_cast<char*>(p);

    //����ָ��
    Building* building = NULL;
    Animal* ani = static_cast<Animal*>(building);
    #endif // 0

    //���м̳й�ϵ�Ķ���ָ�루����ת���ࣩ
    Animal* ani = NULL;
    Cat* cat = static_cast<cat*>(ani);

    // ����ת����
    Cat* soncat = NULL;
    Animal* aniParent = static_cast<Animal*>(soncat);

    // ����
    Animal a1;
    Animal& a1ref = a1;
    //ת����������
    Cat& c1 = static_cast<Cat>(a1ref);

    Cat c2;
    Cat& c2ref = c2;
    Animal a2 = static_cast<Animal>(c2ref);//ת�� ��������


    // static���������������ͣ����м̳й�ϵ��ָ�������
}

// ��̬Ҫ�м̳й�ϵ����
//dynamic_castת�����м̳й�ϵ��ָ������ã���ת��ǰ��������ͼ��
void test02()
{
    // ����ת��
    # if 0
    // �������ݲ���ת
    int a = 100;
    char c = dynamic_cast<char>(a);

    // �Ǽ̳й�ϵ��ָ��
    Building* building = NULL;
    Animal* ani = dynamic_cast<Animal*>(building);
    #endif // 0


    // ��������ת��Ϊ����ָ�루��С���󣩣�����ȫ
    //���м̳й�ϵ�Ķ���ָ�루����ת���ࣩ  �������Ǵ��ڵ��ڸ���ġ�
    #if 0
    Animal* ani = NULL;
    Cat* cat = static_cast<cat*>(ani);    // �������ԭ�����������Ͱ�ȫ��顿
    #endif // 0

    // ����ת����
    Cat* soncat = NULL;
    Animal* aniParent = static_cast<Animal*>(soncat);  // �������������ת���ɸ���ģ��Ӵ�С�ģ������ǰ�ȫ��

    // ����
    Animal a1;
    Animal& a1ref = a1;
    //ת����������
    Cat& c1 = static_cast<Cat>(a1ref);

    Cat c2;
    Cat& c2ref = c2;
    Animal a2 = static_cast<Animal>(c2ref);//ת�� ��������

    // dynamicֻ��ת�����м̳й�ϵ��ָ������ã�����
    // ֻ����������ת�ɻ�����
}

int main(void)
{
    //test01();
    return 0;
}
