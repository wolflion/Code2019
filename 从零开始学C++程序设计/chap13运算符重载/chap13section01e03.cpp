//13-1-3 ��Ԫ���������  ��Ҳ�ֳ�Ա����ǳ�Ա��һ��ֻ��Ҫһ��������һ����Ҫ������Ա�Ļ����и�Ĭ�ϵ�this��
// ������������� >, -,
// ��Ա�������ǳ�Ա�����������ǲ���������ʵ�֣������inline�ɣ��������ʵġ�

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
	bool operator>(Student b)   // ��Ա��������ʡ����һ���������õ�this
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
		cout << "����=" << Name << endl;
	}

	void showScore()
	{
		cout << "�ɼ�=" << Score << endl;
	}
private:
	char Name[20]; 
	int Score;
};

int operator-(int p, Student q)  // �ǳ�Ա����
{
	return (p-q.Score);
}

int main()
{
	Student x("Tom", 70), y("Mary", 85);
	cout << "����x�����ݣ�" << endl;
	x.showName();
	x.showScore();
	cout << "�� " << (100 - x) << "�ֲ���100��" << endl;

	cout << "����y�����ݣ�" << endl;
	y.showName();
	y.showScore();
	cout << "�� " << (100 - y) << "�ֲ���100��" << endl;

	cout << "��һλ�ĳɼ��ϸ�:" << endl;
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