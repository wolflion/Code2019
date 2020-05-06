//12-2-3 “=”运算符重载  【并未提供默认的"=="运算符让用户执行对比操作】

// 例CH13_06.cpp
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Student
{
public:
	char Student_Num[10];
	int Student_Score;
	Student(){}
	Student(char* a, int b)
	{
		strcpy_s(Student_Num, a); //这个地方还是用_s吧
		Student_Score = b;
	}

	bool operator>(Student b)
	{
		if (this->Student_Score > b.Student_Score)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator==(Student c)
	{
		if (this->Student_Score == c.Student_Score)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend istream& operator >> (istream& input, Student& obj);  // 友元放哪无所谓？
};


istream& operator >> (istream& input, Student& obj) // 这个也不需要绑定 类名？
{
	cout << endl << "请输入学生学号：";
	input >> obj.Student_Num>>obj.Student_Score;
	return input;
}

int main()
{
	Student x, y;
	cout << "第一个学生" << endl;
	cin >> x;                                                               // 45  80  【自定义类对象】
	cout << endl << "第2个学生" << endl;
	cin >> y;                                                                // 45 90

	if (x == y)
	{
		cout << "分数相同" << endl;
	}
	else if (x > y)
	{
		cout << "x比y的分数高" << endl;
	}
	else
	{
		cout << endl << "学号" << x.Student_Num << "分数比学号" << y.Student_Num << "低" << endl;
	}

	system("pause");
	return 0;
}