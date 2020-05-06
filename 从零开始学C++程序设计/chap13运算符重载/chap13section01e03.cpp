//13-1-3 二元函数运算符  【也分成员，与非成员，一个只需要一个参数；一个需要两，成员的话，有个默认的this】
// 这个里面重载了 >, -,
// 成员函数，非成员函数的区别？是不是在类内实现，这个是inline吧？【有疑问的】

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student
{
	friend int operator-(int, Student);
public:
	Student(char* N, int s):Score(s)
	{
		strcpy_s(Name, N);
	}
	bool operator>(Student b)   // 成员函数，就省掉了一个参数，用的this
	{
		if (this->Score > b.Score)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void showName(void)
	{
		cout << "名字=" << Name << endl;
	}

	void showScore()
	{
		cout << "成绩=" << Score << endl;
	}
private:
	char Name[20]; 
	int Score;
};

int operator-(int p, Student q)  // 非成员函数
{
	return (p-q.Score);
}

int main()
{
	Student x("Tom", 70), y("Mary", 85);
	cout << "对象x的数据：" << endl;
	x.showName();
	x.showScore();
	cout << "差 " << (100 - x) << "分才有100分" << endl;

	cout << "对象y的数据：" << endl;
	y.showName();
	y.showScore();
	cout << "差 " << (100 - y) << "分才有100分" << endl;

	cout << "哪一位的成绩较高:" << endl;
	if (x > y)
	{
		x.showName();
	}
	else
	{
		y.showName();
	}

	system("pause");
	return 0;
}