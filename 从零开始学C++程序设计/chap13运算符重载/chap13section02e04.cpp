// 13.2 �������������

// 13.2.1 ">>"��"<<"���������   �����뱻���� �ǳ�Ա����������

#include <iostream>
#include <cstdlib>
using namespace std;

class Score
{
private:
	int var1;
	friend istream& operator >> (istream& inputvar, Score& s1);
	friend ostream& operator<< (ostream& inputvar, Score& s2);
};

istream& operator >> (istream& inputvar, Score& s1)
{
	cout << "������һ����ֵ��";
	inputvar >> s1.var1;   //����һ������ cin��cin��istream�Ķ��󣿡�������Բ�����
	return inputvar;
}

ostream& operator<< (ostream& outputvar, Score& s2)
{
	cout << "�����ֵΪ��";
	outputvar << s2.var1 << endl;
	return outputvar;
}

int main()
{
	Score st1;

	cin >> st1;
	cout << st1;

	system("pause");
	return 0;
}