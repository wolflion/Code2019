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
// B������A��B���ڹ��캯���е���A�Ĺ��캯�����Ӷ���ɹ��캯���ġ����ݡ���
