//12-2-1 thisָ��
#include <iostream>
using namespace std;

class Square
{
public:
	Square(int n):a(n*n){}
	Square squ_num(Square b)
	{
		this->a = this->a + b.a;
		return *this;  //ͨ��thisָ�뷵��Square�����
	}
	int show_data()
	{
		cout << (*this).a << endl;  //��(*this)����
		return 0;
	}
private:
	int a;
};

int main()
{
	int n1, n2;
	cout << "�����һ������";   // 8
	cin >> n1;
	cout << "����ڶ�������";   // 6 
	cin >> n2;
	Square first(n1), second(n2), third(0);
	third = first.squ_num(second);
	third.show_data();   // ���100

	system("pause");
	return 0;
}