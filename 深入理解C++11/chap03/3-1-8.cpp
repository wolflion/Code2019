struct A
{
    A(int){}
};

struct B:A
{
    using A::A;
};

B b;  // Bû��Ĭ�Ϲ��캯��
