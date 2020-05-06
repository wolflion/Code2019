#include <cstdio>
class A
{
public:
	void FuncA()
	{
		printf( "FuncA called\n" );
	}
	virtual void FuncB()
	{
		printf( "FuncB called\n" );
	}
};
class B : public A
{
public:
	void FuncA()
	{
		A::FuncA();
		printf( "FuncAB called\n" );
	}
	virtual void FuncB()
	{
		printf( "FuncBB called\n" );
	}
};
void main( void )
{
	B  b;
	A  *pa;
	pa = &b;
	A *pa2 = new A;
	pa->FuncA(); // ��дFuncB()�����FucAB called  �������Ū���ˣ�Ӧ����FucA called����Ϊָ����������󣬵���Ϊ�����麯�������Ի��ǻ���ָ�롿---����ǿ���
	pa->FuncB(); // �� FuncBB called
	pa2->FuncA(); // FuncA called
	pa2->FuncB(); // FuncB called
	delete pa2;
	system("pause");
}
// ����ָ��ָ������ʵ�����󣬵�����ͨ��д����ʱ������ø����еķ����������ñ�������д�麯��ʱ������������еķ�����

// https://www.nowcoder.com/profile/4496301/test/29149377/15224#summary#include <cstdio>
class A
{
public:
	void FuncA()
	{
		printf( "FuncA called\n" );
	}
	virtual void FuncB()
	{
		printf( "FuncB called\n" );
	}
};
class B : public A
{
public:
	void FuncA()
	{
		A::FuncA();
		printf( "FuncAB called\n" );
	}
	virtual void FuncB()
	{
		printf( "FuncBB called\n" );
	}
};
void main( void )
{
	B  b;
	A  *pa;
	pa = &b;
	A *pa2 = new A;
	pa->FuncA(); // ��дFuncB()�����FucAB called  �������Ū���ˣ���Ϊָ����������󣬵���Ϊ�����麯�������Ի��ǻ���ָ�롿
	pa->FuncB(); // �� FuncBB called
	pa2->FuncA(); // FuncA called
	pa2->FuncB(); // FuncB called
	delete pa2;
	system("pause");
}
// ����ָ��ָ������ʵ�����󣬵�����ͨ��д����ʱ������ø����еķ����������ñ�������д�麯��ʱ������������еķ�����

// https://www.nowcoder.com/profile/4496301/test/29149377/15224#summary