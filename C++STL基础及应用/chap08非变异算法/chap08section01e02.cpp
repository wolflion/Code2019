//e8_2.cpp ��8.2 �����������ĺ͡����ֵ����Сֵ

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

	//�൱���� PrintInfo<int>()
	PrintInfo p = for_each(A, A + N, PrintInfo());  // ����ķ�ʽ��֮ǰ�ú����ķ�ʽ  ���º�����������()�������
	cout << "�ܺ��ǣ�" << p.GetSum() << endl;
	cout << "���ֵ��" << p.GetMax() << endl;
	cout << "��Сֵ��" << p.GetMin() << endl;
	system("pause");
	return 0;
}