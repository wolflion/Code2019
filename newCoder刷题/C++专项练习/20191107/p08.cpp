#include<iostream>
using namespace std;

class Base
{
public:
	Base(const char* p_szName):m_szName(p_szName)
	{
		cout<<m_szName<<",";
	}
	virtual ~Base()
	{
		cout<<"~"<<m_szName<<",";
	}

private:
   const char* m_szName;
};

class Derived:public Base
{
public:
	Derived(const char* p_szName):m_szName(p_szName)
		,m_objA((const char*)"A")
		,m_objB((const char*)"B")
		//,m_objA((const char*)"A")   // 【换成这样，CBAD了，但析构时，还是先A再B】  *lionel*这个就不太懂了
		,Base((const char*)"C")   // 先构造基类C,然后构造A,B【跟调用顺序有关】
	{
		cout<<m_szName<<",";
	}

	virtual ~Derived()
	{
		cout<<"~"<<m_szName<<".";
	}
private:
	const char* m_szName;
	Base m_objB;
	Base m_objA;  // 跟声明顺序无关
};

int main()
{
	Base*p = new Derived("D");
	delete p;   // C,B,A,D ~D,~A,~B,~C    【析构肯定是D，最后是C，那么AB怎么确定？】
	system("pause");
	return 0;
}

//https://www.nowcoder.com/test/question/done?tid=29161030&qid=112302#summary