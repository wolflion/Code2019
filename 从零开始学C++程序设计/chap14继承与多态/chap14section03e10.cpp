// 14-3-5 �������    
// CH14_10.cpp    �������3��̳��У�����ͬһ���������⡿

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
	void shutdown()
	{
		cout << "���乤��Ϩ��" << endl;
	}
};

class aircraft :virtual public vehicle  //������� aricraft
{
public:
    void fly()
	{
		cout << "����������" << endl;
	}
	void land()
	{
		cout << "��������½" << endl;
	}
};

class car :virtual public vehicle
{
public:
	void go()
	{
		cout << "��������" << endl;
	}
	void stop()
	{
		cout << "����Ϩ��" << endl;
	}
};

class aircar:public aircraft,public car {};  // ����������aircar

int main()
{
	aircar ac;
	ac.start();  // �������������vehicle�ĳ�Ա����start
	ac.go();
	ac.fly();
	ac.land();
	ac.stop();
	ac.shutdown();

	system("pause");
	return 0;
}