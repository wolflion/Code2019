struct A
{
    A(int i){}
    A(double d,int i){}
    A(float f,int i,const char* c){}
    // ...
};

struct B : A
{
    using A::A;  // �̳й��캯����ͨ������������ѻ����еĹ��캯��Ϥ���̳е�������B�С�
    // ...
    virtual void ExtraInterface(){}
};
// g++ -c 3-1-4.cpp
