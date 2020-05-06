//12-2-1 this指针
#include <iostream>
using namespace std;

class Square
{
public:
	Square(int n):a(n*n){}
	Square squ_num(Square b)
	{
		this->a = this->a + b.a;
		return *this;  //通过this指针返回Square类对象
	}
	int show_data()
	{
		cout << (*this).a << endl;  //用(*this)访问
		return 0;
	}
private:
	int a;
};

int main()
{
	int n1, n2;
	cout << "输入第一个数：";   // 8
	cin >> n1;
	cout << "输入第二个数：";   // 6 
	cin >> n2;
	Square first(n1), second(n2), third(0);
	third = first.squ_num(second);
	third.show_data();   // 输出100

	system("pause");
	return 0;
}