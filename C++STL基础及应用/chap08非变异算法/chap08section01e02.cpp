//e8_2.cpp 例8.2 求整数向量的和、最大值、最小值

#include <iostream>
#include <algorithm>
using namespace std;

class PrintInfo
{
public:
	PrintInfo() :count(0), nSum(0){}
	int GetSum(){ return nSum; }
	int GetMax() { return nMax; }
	int GetMin() { return nMin; }

	void operator() (int x)
	{
		if (count == 0)
		{
			nMax = x;
			nMin = x;
		}
		else
		{
			if (nMax < x)
			{
				nMax = x;
			}
			if (nMin > x)
			{
				nMin = x;
			}
		}
		nSum += x;
		count++;
	}
private:
	int nSum, nMax, nMin, count;
};


int main()
{
	int A[] = { 1, 4, 2, 8, 5, 7 };
	const int N = sizeof(A) / sizeof(int);

	//相当于是 PrintInfo<int>()
	PrintInfo p = for_each(A, A + N, PrintInfo());  // 用类的方式，之前用函数的方式  【仿函数，重载了()运算符】
	cout << "总和是：" << p.GetSum() << endl;
	cout << "最大值：" << p.GetMax() << endl;
	cout << "最小值：" << p.GetMin() << endl;
	system("pause");
	return 0;
}