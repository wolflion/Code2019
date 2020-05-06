// 14-3-5 虚拟基类    
// CH14_10.cpp    【解决第3层继承中，用了同一个根类问题】

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
	void shutdown()
	{
		cout << "运输工具熄火" << endl;
	}
};

class aircraft :virtual public vehicle  //虚拟基类 aricraft
{
public:
    void fly()
	{
		cout << "飞行器飞行" << endl;
	}
	void land()
	{
		cout << "飞行器着陆" << endl;
	}
};

class car :virtual public vehicle
{
public:
	void go()
	{
		cout << "汽车启动" << endl;
	}
	void stop()
	{
		cout << "汽车熄火" << endl;
	}
};

class aircar:public aircraft,public car {};  // 声明派生类aircar

int main()
{
	aircar ac;
	ac.start();  // 调用上两层基类vehicle的成员函数start
	ac.go();
	ac.fly();
	ac.land();
	ac.stop();
	ac.shutdown();

	system("pause");
	return 0;
}