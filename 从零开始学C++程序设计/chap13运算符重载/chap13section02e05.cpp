//13-2-2 "="���������  ������Ϊ ���Ǿ�̬���ĳ�Ա���������ܱ�������̳У�û���κ�����ڣ�Ĭ�ϵ�=��������Ա����������ܡ�

//��ch13_05.cpp

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
	out << "\n����:" << myClass.m_Name
		<< "\nӢ��:" << myClass.m_English
		<< "\n��ѧ:" << myClass.m_Math
		<< "\n����:" << myClass.m_Chinese << endl;
	return out;
}

int main()
{
	char cName[10];
	int iEng, iMath, iCh;
	cin >> cName >> iEng >> iMath >> iCh;   //lionel 98 94 93


	MyClass* myClass = new MyClass(cName, iEng, iMath, iCh);
	cout << (*myClass);

	MyClass* myClass1 = new MyClass(cName);    // ���캯�������� =��������� ��ע��д���ˡ�
	*myClass1 = *myClass;  // ��ֵ���������
	cout << (*myClass1);

	delete myClass1;
	delete myClass;

	system("pause");
	return 0;
}