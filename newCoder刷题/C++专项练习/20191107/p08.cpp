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
		//,m_objA((const char*)"A")   // ������������CBAD�ˣ�������ʱ��������A��B��  *lionel*����Ͳ�̫����
		,Base((const char*)"C")   // �ȹ������C,Ȼ����A,B��������˳���йء�
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
	Base m_objA;  // ������˳���޹�
};

int main()
{
	Base*p = new Derived("D");
	delete p;   // C,B,A,D ~D,~A,~B,~C    �������϶���D�������C����ôAB��ôȷ������
	system("pause");
	return 0;
}

//https://www.nowcoder.com/test/question/done?tid=29161030&qid=112302#summary