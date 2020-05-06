#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{
	friend int operator+(Student&, Student&);  // 为何是友元呢？【为了读取private的 score成员】
public:
	Student(int S_Score):score(S_Score){}
private:
	int score;
};

int operator+(Student& a, Student& b)
{
	return a.score + b.score;
}

int main()
{
	Student x(90), y(75);
	cout << "x+y=" << x + y << endl;  // 这样Student的对象也能进行 加 运算
	system("pause");
	return 0;
}