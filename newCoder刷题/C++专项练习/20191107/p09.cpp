#include<cstdio>

class A
{
public:
    A()
    {
        printf("A ");
    }
     
    ~A()
    {
        printf("deA ");
    }
};
 
class B
{
public:
    B()
    {
        printf("B ");
    }
    ~B()
    {
        printf("deB ");
    }
};
 
//class C: public A, public B    // ����������ABC��
class C: public B, public A      // ����������BAC��
{
public:
    C()
    {
        printf("C ");
    }
    ~C()
    {
        printf("deC ");
    }
};
int main()
{
    A *a = new C();
    delete a;    // ��Ϊ��������û��virtual�����Ի����û���ģ����ԡ����deA��
	getchar();
    return 0;
}
