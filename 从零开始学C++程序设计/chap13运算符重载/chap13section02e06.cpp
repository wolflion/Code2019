//12-2-3 ��=�����������  ����δ�ṩĬ�ϵ�"=="��������û�ִ�жԱȲ�����

// ��CH13_06.cpp
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
		strcpy_s(Student_Num, a); //����ط�������_s��
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

	friend istream& operator >> (istream& input, Student& obj);  // ��Ԫ��������ν��
};


istream& operator >> (istream& input, Student& obj) // ���Ҳ����Ҫ�� ������
{
	cout << endl << "������ѧ��ѧ�ţ�";
	input >> obj.Student_Num>>obj.Student_Score;
	return input;
}

int main()
{
	Student x, y;
	cout << "��һ��ѧ��" << endl;
	cin >> x;                                                               // 45  80  ���Զ��������
	cout << endl << "��2��ѧ��" << endl;
	cin >> y;                                                                // 45 90

	if (x == y)
	{
		cout << "������ͬ" << endl;
	}
	else if (x > y)
	{
		cout << "x��y�ķ�����" << endl;
	}
	else
	{
		cout << endl << "ѧ��" << x.Student_Num << "������ѧ��" << y.Student_Num << "��" << endl;
	}

	system("pause");
	return 0;
}