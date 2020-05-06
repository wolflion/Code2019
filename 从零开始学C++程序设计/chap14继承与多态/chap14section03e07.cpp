//14-3 多态与虚拟函数

// CH14_07.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

class vehicle
{
public:
	void start()
	{
		cout << "运输工具启动" << endl;
	}
	void stop()
	{
		cout << "运输工具停止" << endl;
	}
};

class aircraft:public vehicle
{
public:
	void start()
	{
		cout << "飞行器启动" << endl;
	}
	void stop()
	{
		cout << "飞行器停止" << endl;
	}
};

class car :public vehicle
{
public:
	void start()
	{
		cout << "汽车启动" << endl;
	}
	void stop()
	{
		cout << "汽车停止" << endl;
	}
};

int main()
{
	vehicle* ve = new vehicle();  // 基类指针
	aircraft af;
	car cr;
	ve->start();  // 基类的start
	ve->stop();
	delete ve;
	af.start();  // 自己的start
	af.stop();
	cr.start();
	cr.stop();

	system("pause");
	return 0;
}