//8.3节计数

//例8.6 e8_6.cpp 求数组中有多少个0

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int A[] = { 2, 0, 4, 6, 0, 3, 1, -7 };
	const int N = sizeof(A) / sizeof(int);
	cout << "Number of zeros: " << count(A, A + N, 0) << endl;
	system("pause");
	return 0;
}