//13-2-2 "="运算符重载  【必须为 “非静态”的成员函数；不能被派生类继承；没有任何类存在，默认的=运算符可以被编译器接受】

//例ch13_05.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass
{
	friend ostream& operator<<(ostream&, MyClass&);
public:
	MyClass(char* cName, int iEng=0,int iMath=0,int iCh=0):m_Name(cName),m_English(iEng),m_Math(iMath),m_Chinese(iCh){}

	MyClass& operator=(const MyClass& myClass)
	{
		this->m_English = myClass.m_English;
		this->m_Chinese = myClass.m_Chinese;
		this->m_Math = myClass.m_Math;
		return *this;
	}
private:
	char* m_Name;
	int m_English;
	int m_Math;
	int m_Chinese;
};

ostream& operator<<(ostream& out, MyClass& myClass)
{
	out << "\n姓名:" << myClass.m_Name
		<< "\n英语:" << myClass.m_English
		<< "\n数学:" << myClass.m_Math
		<< "\n语文:" << myClass.m_Chinese << endl;
	return out;
}

int main()
{
	char cName[10];
	int iEng, iMath, iCh;
	cin >> cName >> iEng >> iMath >> iCh;   //lionel 98 94 93


	MyClass* myClass = new MyClass(cName, iEng, iMath, iCh);
	cout << (*myClass);

	MyClass* myClass1 = new MyClass(cName);    // 构造函数，不是 =运算符重载 【注释写错了】
	*myClass1 = *myClass;  // 赋值运算符重载
	cout << (*myClass1);

	delete myClass1;
	delete myClass;

	system("pause");
	return 0;
}