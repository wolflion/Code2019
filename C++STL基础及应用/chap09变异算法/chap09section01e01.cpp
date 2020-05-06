//例9.1 copy简单示例  【正向拷贝，反向拷贝】copy()和copy_backward

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5];
	vector<int>v;

	copy(a, a + 5, b);        //[)，左闭，右开，所以必须+5。
	copy(a, a + 5, back_inserter(v));   // 用back_inserter()插入迭代器动态改变容器的大小

	cout << "原始a数组为：";
	copy(a, a + 5, ostream_iterator<int>(cout, "\t"));
	cout << endl;
	cout << "b数组为：";
	copy(b, b + 5, ostream_iterator<int>(cout, "\t"));
	cout << endl;
	cout << "vector向量为：";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;

	system("pause");
	return 0;
}