// 14-3-2 声明虚拟函数

//14-3 多态与虚拟函数

// CH14_07.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

class vehicle
{
public:
	virtual void start()
	{
		cout << "运输工具启动" << endl;
	}
	virtual void stop()
	{
		cout << "运输工具停止" << endl;
	}
};

class aircraft :public vehicle
{
public:
	virtual void start()
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
	vehicle* ve = new vehicle();  // 基类指针
	aircraft af;
	car cr;
	ve->start();  // 基类的start
	ve->stop();
	delete ve;    // 【这个地方 是不是 写得不对啊，应该是最后删才行啊】

	ve = &af;   // 用基类指针 指向 派生类 aircraft
	ve->start();  
	ve->stop();

	ve = &cr;
	ve->start();
	ve->stop();
	
	system("pause");
	return 0;
}