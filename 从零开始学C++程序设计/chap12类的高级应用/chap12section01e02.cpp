//12-1-2友元函数

#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{
	friend float add_score(Student);  // 友元函数不是类中的成员，可以在类内部任意位置声明，通常置于首行
public:
	Student(int id, float E, float M) :StuID(id), Score_E(E), Score_M(M)
	{
		Score_T = Score_M + Score_E;
		cout << "学生学号：" << StuID << "" << endl;
		cout << "总分是" << Score_T << "分" << endl;
	}
private:
	int StuID;
	float Score_E, Score_M, Score_T;
};

float add_score(Student a)
{
	a.Score_T += 30;
	return a.Score_T;
}

int main()
{
	Student stud1(920101, 80, 90);
	cout << "加30分后，总分为：" << add_score(stud1) << "分" << endl;

	system("pause");
	return 0;
}