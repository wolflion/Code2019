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
	pa->FuncA(); // 重写FuncB()，输出FucAB called  【这个我弄错了，应该是FucA called，因为指向了子类对象，但因为不是虚函数，所以还是基类指针】---这个是考点
	pa->FuncB(); // 虚 FuncBB called
	pa2->FuncA(); // FuncA called
	pa2->FuncB(); // FuncB called
	delete pa2;
	system("pause");
}
// 父类指针指向子类实例对象，调用普通重写方法时，会调用父类中的方法。而调用被子类重写虚函数时，会调用子类中的方法。

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
	pa->FuncA(); // 重写FuncB()，输出FucAB called  【这个我弄错了，因为指向了子类对象，但因为不是虚函数，所以还是基类指针】
	pa->FuncB(); // 虚 FuncBB called
	pa2->FuncA(); // FuncA called
	pa2->FuncB(); // FuncB called
	delete pa2;
	system("pause");
}
// 父类指针指向子类实例对象，调用普通重写方法时，会调用父类中的方法。而调用被子类重写虚函数时，会调用子类中的方法。

// https://www.nowcoder.com/profile/4496301/test/29149377/15224#summary