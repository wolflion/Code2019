//��8.4 e8_4.cpp  ����ѧ�Ų�ѯѧ����Ϣ������֪ѧ���ǹؼ��֡�
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

	bool operator==(int NO)  // ���ǹؼ���==���������   ��ɶʱ�����õ��أ��� 
	{
		return (this->NO == NO);  // ��find��ʱ����ã��ж�NO�����
	}
};

int main()
{
	vector<Student> v;
	Student s1(101, "����");
	Student s2(102, "����");
	v.push_back(s1);
	v.push_back(s2);

	vector<Student>::iterator begin, end, it_find;
	begin = v.begin();
	end = v.end();

	int nFindNO = 102; // ��ѯ����
	it_find = find(begin, end, nFindNO);   // find���ظ�������

	cout << "��ѯѧ��Ϊ" << nFindNO << "����Ϣ��" << endl;

	if (it_find != end)
	{
		cout << "ѧ�ţ�" << (*it_find).NO << "\t" << "������" << (*it_find).strName << endl;
	}
	else
	{
		cout << "�޸�ѧ��ѧ����" << endl;
	}

	system("pause");
	return 0;
}