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
    int d{0};
};

int main()
{
    B b(356); // b.d����ʼ��Ϊ0
}
// g++ -c 3-1-5.cpp
