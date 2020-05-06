// 13-3-4 �������
// CH14_09.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

class vehicle
{
public:
	virtual void start() = 0;  //�����⺯��
	virtual void stop() = 0; 
};

class aircraft :public vehicle
{
public:
	virtual void start()   // ͬ����ʽ��Ա������virtual��ʡ
	{
		cout << "����������" << endl;
	}
	virtual void stop()
	{
		cout << "������ֹͣ" << endl;
	}
};

class car :public vehicle
{
public:
	virtual void start()
	{
		cout << "��������" << endl;
	}
	virtual void stop()
	{
		cout << "����ֹͣ" << endl;
	}
};

int main()
{
	vehicle* ve;  // ����ָ��,**������಻��ʵ����**
	aircraft af;
	car cr;

	ve = &af;   // �û���ָ�� ָ�� ������ aircraft
	ve->start();
	ve->stop();

	ve = &cr;
	ve->start();
	ve->stop();

	system("pause");
	return 0;
}