//12-1-2��Ԫ����

#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{
	friend float add_score(Student);  // ��Ԫ�����������еĳ�Ա�����������ڲ�����λ��������ͨ����������
public:
	Student(int id, float E, float M) :StuID(id), Score_E(E), Score_M(M)
	{
		Score_T = Score_M + Score_E;
		cout << "ѧ��ѧ�ţ�" << StuID << "" << endl;
		cout << "�ܷ���" << Score_T << "��" << endl;
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
	cout << "��30�ֺ��ܷ�Ϊ��" << add_score(stud1) << "��" << endl;

	system("pause");
	return 0;
}