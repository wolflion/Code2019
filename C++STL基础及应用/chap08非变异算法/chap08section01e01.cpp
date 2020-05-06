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

	IntVector Numbers(VECTOR_SIZE);  // ���������Ĺ��캯����ʽ��
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

	// start,end��ָ�룬���Ǿ����ֵ��PrintCube����ֻ��һ������
	for_each(start, end, PrintCube);  // [start,end)��ÿ��Ԫ����ΪPrintCube�Ĳ������벢ִ��
	
	cout << "\n";
	system("pause");
	return 0;
}