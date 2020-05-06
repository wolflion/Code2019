//13-2-4  "++"和"--"运算符重载
// 【前置operator++()  ,后置 operator++(int)】，两个要有区分

#include <iostream>
#include <cstdlib>
using namespace std;

class Matrix
{
public:
	Matrix()   // 可以自定义实现 构造函数
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
	return(*this);   // 前置的返回自身即可,用*this指代对象
}

Matrix Matrix::operator++(int)
{
	Matrix Tmp;
	int i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			Tmp.Matrix_Num[i][j] = Matrix_Num[i][j]++;
	return (Tmp);  // 这里返回一个临时对象
}

int main()
{
	Matrix M1, M2, Prefix, Postfix;
	cout << "请输入M1矩阵的值：";
	cin >> M1;                                           // 1 2 3 4 

	cout << "请输入M2矩阵的值：";
	cin >> M2;                                          // 5 6 7 8

	Prefix = ++M1;  // 赋值运算符重载，要做吗？ 【类自带了，应该】
	Postfix = M2++;

	cout << endl;
	cout << "执行Prefix =++M1后，Prefix矩阵的值为：" << endl;
	cout << Prefix << endl;           // 2 3 4 5 
	cout << "执行Postfix=M2++后，Postfix矩阵的值为：" << endl;
	cout << Postfix << endl;        // 5 6 7 8 

	system("pause");
	return 0;
}