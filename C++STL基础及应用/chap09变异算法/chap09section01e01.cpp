//��9.1 copy��ʾ��  �����򿽱������򿽱���copy()��copy_backward

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5];
	vector<int>v;

	copy(a, a + 5, b);        //[)����գ��ҿ������Ա���+5��
	copy(a, a + 5, back_inserter(v));   // ��back_inserter()�����������̬�ı������Ĵ�С

	cout << "ԭʼa����Ϊ��";
	copy(a, a + 5, ostream_iterator<int>(cout, "\t"));
	cout << endl;
	cout << "b����Ϊ��";
	copy(b, b + 5, ostream_iterator<int>(cout, "\t"));
	cout << endl;
	cout << "vector����Ϊ��";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;

	system("pause");
	return 0;
}