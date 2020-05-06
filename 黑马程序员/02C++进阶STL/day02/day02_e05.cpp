//04 类型转换基本语法_rec.

/*
C语言不作类型检查
CPP在类型转换时，要做类型检查

static_cast()  //基础数据类型转换，指针
const_cast()   //指针、引用、去const

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
    char c = static_cast<char>(a);  // 10本身对应的是不是就是 空 啊
    cout<<a<<endl;
    cout<<c<<endl;

    // 这些不能转
    #if 0
    //基础数据类型指针
    int *p = NULL;
    char *sp = static_cast<char*>(p);

    //对象指针
    Building* building = NULL;
    Animal* ani = static_cast<Animal*>(building);
    #endif // 0

    //具有继承关系的对象指针（父类转子类）
    Animal* ani = NULL;
    Cat* cat = static_cast<cat*>(ani);

    // 子类转父类
    Cat* soncat = NULL;
    Animal* aniParent = static_cast<Animal*>(soncat);

    // 引用
    Animal a1;
    Animal& a1ref = a1;
    //转成子类引用
    Cat& c1 = static_cast<Cat>(a1ref);

    Cat c2;
    Cat& c2ref = c2;
    Animal a2 = static_cast<Animal>(c2ref);//转成 父类引用


    // static用于内置数据类型，具有继承关系的指针或引用
}

// 多态要有继承关系才行
//dynamic_cast转换具有继承关系的指针或引用，在转换前会进行类型检查
void test02()
{
    // 不能转的
    # if 0
    // 基础数据不能转
    int a = 100;
    char c = dynamic_cast<char>(a);

    // 非继承关系的指针
    Building* building = NULL;
    Animal* ani = dynamic_cast<Animal*>(building);
    #endif // 0


    // 父类子针转换为子类指针（从小到大），不安全
    //具有继承关系的对象指针（父类转子类）  【子类是大于等于父类的】
    #if 0
    Animal* ani = NULL;
    Cat* cat = static_cast<cat*>(ani);    // 【报错的原因，在于作类型安全检查】
    #endif // 0

    // 子类转父类
    Cat* soncat = NULL;
    Animal* aniParent = static_cast<Animal*>(soncat);  // 这个不报错（子类转换成父类的，从大到小的）类型是安全的

    // 引用
    Animal a1;
    Animal& a1ref = a1;
    //转成子类引用
    Cat& c1 = static_cast<Cat>(a1ref);

    Cat c2;
    Cat& c2ref = c2;
    Animal a2 = static_cast<Animal>(c2ref);//转成 父类引用

    // dynamic只能转换具有继承关系的指针或引用，并且
    // 只能由子类型转成基类型
}

int main(void)
{
    //test01();
    return 0;
}
