#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void PrintCube(int n)
{
	cout << n * n * n << "";
}

int main()
{
	const int VECTOR_SIZE = 8;
	typedef vector<int> IntVector;
	typedef IntVector::iterator IntVectorIt;

	IntVector Numbers(VECTOR_SIZE);  // 这是容器的构造函数格式？
	IntVectorIt start, end, it;

	for (int i = 0; i < VECTOR_SIZE;i++)
	{
		Numbers[i] = i + 1;
	}

	start = Numbers.begin();
	end = Numbers.end();

	cout << "Numbers{";
	for (it = start; it != end;it++)
	{
		cout << *it << " ";
	}
	cout << "}\n" << endl;

	// start,end是指针，不是具体的值；PrintCube有且只有一个参数
	for_each(start, end, PrintCube);  // [start,end)间每个元素作为PrintCube的参数传入并执行
	
	cout << "\n";
	system("pause");
	return 0;
}