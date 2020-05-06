//13-2-4  "++"��"--"���������
// ��ǰ��operator++()  ,���� operator++(int)��������Ҫ������

#include <iostream>
#include <cstdlib>
using namespace std;

class Matrix
{
public:
	Matrix()   // �����Զ���ʵ�� ���캯��
	{
		int i, j;
		for (i = 0; i < 2; i++)
			for (j = 0; j < 2; j++)
				Matrix_Num[i][j] = 0;
	}

	Matrix(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2)
	{
		Matrix_Num[0][0] = Tmp_a1;
		Matrix_Num[0][1] = Tmp_a2;
		Matrix_Num[1][0] = Tmp_b1;
		Matrix_Num[1][1] = Tmp_b2;
	}

	friend istream& operator >> (istream& in, Matrix& Tmp_Mat);
	friend ostream& operator<<(ostream& out, Matrix& Tmp_Mat);

	Matrix operator++();
	Matrix operator++(int);

private:
	int Matrix_Num[2][2];
};

istream& operator >> (istream& in, Matrix& Tmp_Mat)
{
	int i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			in >> Tmp_Mat.Matrix_Num[i][j];
	return(in);
}

ostream& operator<<(ostream& out, Matrix& Tmp_Mat)
{
	int i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			out << Tmp_Mat.Matrix_Num[i][j] << "\t";
	cout << endl;
	return(out);
}

Matrix Matrix::operator++()
{
	int i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			++Matrix_Num[i][j];
	return(*this);   // ǰ�õķ���������,��*thisָ������
}

Matrix Matrix::operator++(int)
{
	Matrix Tmp;
	int i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			Tmp.Matrix_Num[i][j] = Matrix_Num[i][j]++;
	return (Tmp);  // ���ﷵ��һ����ʱ����
}

int main()
{
	Matrix M1, M2, Prefix, Postfix;
	cout << "������M1�����ֵ��";
	cin >> M1;                                           // 1 2 3 4 

	cout << "������M2�����ֵ��";
	cin >> M2;                                          // 5 6 7 8

	Prefix = ++M1;  // ��ֵ��������أ�Ҫ���� �����Դ��ˣ�Ӧ�á�
	Postfix = M2++;

	cout << endl;
	cout << "ִ��Prefix =++M1��Prefix�����ֵΪ��" << endl;
	cout << Prefix << endl;           // 2 3 4 5 
	cout << "ִ��Postfix=M2++��Postfix�����ֵΪ��" << endl;
	cout << Postfix << endl;        // 5 6 7 8 

	system("pause");
	return 0;
}