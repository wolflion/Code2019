struct A
{
    A(int i){}
    A(double d,int i){}
    A(float f,int i,const char* c){}
    // ...
};

struct B : A
{
    using A::A;  // 继承构造函数，通过这个声明，把基类中的构造函数悉数继承到派生类B中。
    // ...
    virtual void ExtraInterface(){}
};
// g++ -c 3-1-4.cpp
