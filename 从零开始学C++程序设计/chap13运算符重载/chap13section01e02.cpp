// 13-1-2 一元运算符重载 【定义成员函数，非成员函数两种场景】
// 成员函数 时 ，有个this对象

#include <iostream>
#include <cstdlib>
using namespace std;

class IsZero
{
public:
	IsZero(int n):Num(n){}
	IsZero():Num(-1){}

	bool operator!(); // 成员函数，可以不用加参数；【非成员函数，要加个参数 !(参数)】
private:
	int Num;
};

bool IsZero::operator!()   // 不要忘记类名
{
	if (Num >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	IsZero Num1(3),Num2;
	if (!Num1 )
	{
		cout << "Num1大于等于0" << endl;
	}
	if (!Num2)  // -1  返回的是false  【用!把 IsZero对象转成了bool类型】，所以这个分支没走
	{
		cout<<"Num1小于0"<<endl;
	}
	system("pause");
	return 0;
}