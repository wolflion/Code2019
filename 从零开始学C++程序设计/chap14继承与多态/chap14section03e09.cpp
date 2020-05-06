// 13-3-4 抽象基类
// CH14_09.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

class vehicle
{
public:
	virtual void start() = 0;  //纯虚拟函数
	virtual void stop() = 0; 
};

class aircraft :public vehicle
{
public:
	virtual void start()   // 同名异式成员函数，virtual可省
	{
		cout << "飞行器启动" << endl;
	}
	virtual void stop()
	{
		cout << "飞行器停止" << endl;
	}
};

class car :public vehicle
{
public:
	virtual void start()
	{
		cout << "汽车启动" << endl;
	}
	virtual void stop()
	{
		cout << "汽车停止" << endl;
	}
};

int main()
{
	vehicle* ve;  // 基类指针,**抽象基类不可实例化**
	aircraft af;
	car cr;

	ve = &af;   // 用基类指针 指向 派生类 aircraft
	ve->start();
	ve->stop();

	ve = &cr;
	ve->start();
	ve->stop();

	system("pause");
	return 0;
}