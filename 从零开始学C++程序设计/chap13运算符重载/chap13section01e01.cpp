#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{
	friend int operator+(Student&, Student&);  // Ϊ������Ԫ�أ���Ϊ�˶�ȡprivate�� score��Ա��
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
	cout << "x+y=" << x + y << endl;  // ����Student�Ķ���Ҳ�ܽ��� �� ����
	system("pause");
	return 0;
}