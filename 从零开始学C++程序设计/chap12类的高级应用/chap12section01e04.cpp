//12-1-3 友元类
// chap12_04.cpp
#include <iostream>
#include <cstring>
using namespace std;

class teacher
{
	friend class Student;   // 友元类
public:
	void teach(int ID)
	{
		if (ID == 1)
		{
			strcpy_s(tName, "John");
		}
		else
		{
			strcpy_s(tName, "Andy");
		}
	}
private:
	char tName[10];
};

class Student
{
public:
	Student(int id, int C)
	{
		StuID = id;
		Select_C = C;
		cout << "学生学号：" << StuID << endl;
		cout << "课程编号：" << Select_C << endl;
		teacher t;
		t.teach(Select_C);
		cout << "授课教授：" << t.tName << endl;
	}
private:
	int StuID, Select_C;
};

int main()
{
	Student stud1(920101, 2);
	Student stud2(920102, 1);

	system("pause");
	return 0;
}