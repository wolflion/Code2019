// 13.2 特殊运算符重载

// 13.2.1 ">>"和"<<"运算符重载   【必须被重载 非成员函数函数】

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
	cout << "请输入一个数值：";
	inputvar >> s1.var1;   //本来一般是用 cin，cin是istream的对象？【这个理解对不？】
	return inputvar;
}

ostream& operator<< (ostream& outputvar, Score& s2)
{
	cout << "输入的值为：";
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