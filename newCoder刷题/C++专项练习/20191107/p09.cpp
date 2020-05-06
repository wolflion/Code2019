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
 
//class C: public A, public B    // 【这个输出是ABC】
class C: public B, public A      // 【这个输出是BAC】
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
    delete a;    // 因为基类析构没有virtual，所以还是用基类的，所以【输出deA】
	getchar();
    return 0;
}
