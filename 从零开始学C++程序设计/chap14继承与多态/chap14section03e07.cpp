//14-3 ��̬�����⺯��

// CH14_07.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

class vehicle
{
public:
	void start()
	{
		cout << "���乤������" << endl;
	}
	void stop()
	{
		cout << "���乤��ֹͣ" << endl;
	}
};

class aircraft:public vehicle
{
public:
	void start()
	{
		cout << "����������" << endl;
	}
	void stop()
	{
		cout << "������ֹͣ" << endl;
	}
};

class car :public vehicle
{
public:
	void start()
	{
		cout << "��������" << endl;
	}
	void stop()
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
	delete ve;
	af.start();  // �Լ���start
	af.stop();
	cr.start();
	cr.stop();

	system("pause");
	return 0;
}