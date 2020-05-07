struct A
{
    A(int){}
};

struct B
{
    B(int){}
};

struct C:A,B
{
    using A::A;
    using B::B;
    // 增加一行解决冲突问题
    C(int){}
};
