struct A
{
    A(int i){}
};

struct B:A
{
    B(int i):A(i),d(i){}
    int d;
};

// g++ -c 3-1.cpp
// B派生于A，B又在构造函数中调用A的构造函数，从而完成构造函数的“传递”。
