// 14-3-2 �������⺯��

//14-3 ��̬�����⺯��

// CH14_07.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

class vehicle
{
public:
	virtual void start()
	{
		cout << "���乤������" << endl;
	}
	virtual void stop()
	{
		cout << "���乤��ֹͣ" << endl;
	}
};

class aircraft :public vehicle
{
public:
	virtual void start()
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
	vehicle* ve = new vehicle();  // ����ָ��
	aircraft af;
	car cr;
	ve->start();  // �����start
	ve->stop();
	delete ve;    // ������ط� �ǲ��� д�ò��԰���Ӧ�������ɾ���а���

	ve = &af;   // �û���ָ�� ָ�� ������ aircraft
	ve->start();  
	ve->stop();

	ve = &cr;
	ve->start();
	ve->stop();
	
	system("pause");
	return 0;
}