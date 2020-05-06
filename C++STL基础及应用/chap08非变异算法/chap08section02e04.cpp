//例8.4 e8_4.cpp  根据学号查询学生信息，且已知学号是关键字。
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Student
{
public:
	int NO;
	string strName;
	Student(int NO, string strName) :NO(NO), strName(strName)
	{

	}

	bool operator==(int NO)  // 这是关键，==运算符重载   【啥时代调用的呢？】 
	{
		return (this->NO == NO);  // 在find的时候调用，判断NO的情况
	}
};

int main()
{
	vector<Student> v;
	Student s1(101, "张三");
	Student s2(102, "李四");
	v.push_back(s1);
	v.push_back(s2);

	vector<Student>::iterator begin, end, it_find;
	begin = v.begin();
	end = v.end();

	int nFindNO = 102; // 查询条件
	it_find = find(begin, end, nFindNO);   // find返回个迭代器

	cout << "查询学号为" << nFindNO << "的信息：" << endl;

	if (it_find != end)
	{
		cout << "学号：" << (*it_find).NO << "\t" << "姓名：" << (*it_find).strName << endl;
	}
	else
	{
		cout << "无该学号学生！" << endl;
	}

	system("pause");
	return 0;
}