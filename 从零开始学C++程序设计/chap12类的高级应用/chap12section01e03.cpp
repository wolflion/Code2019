//CH12_03.CPP
#include <iostream>
#include <cstdlib>
using namespace std;

class Share;
class Friend
{
public:
	void Access(Share* s); 
};

class Share
{
	friend void Friend::Access(Share* s);
public:
	int c;
	Share():a(1),b(2),c(3){}
	void printC()
	{
		cout << "使用Share的public方法" << endl;
	}
protected:
	int b;
	void printB()
	{
		cout << "使用Share的protected方法" << endl;
	}
private:
	int a;
	void printA()
	{
		cout << "使用Share的private方法" << endl;
	}
};

void Friend::Access(Share* s)
{
	s->a = s->b = s->c = 5;
	cout << "a=" << s->a <<"b="<< s->b <<"c="<< s->c << endl;
	cout << "----------------------------------" << endl;
	s->printA();
	s->printB();
	s->printC();
}

int main()
{
	Share sh;
	Friend fr;
	fr.Access(&sh);  // 参数是Share类型的对象指针，所以必须传入&sh

	system("pause");
	return 0;
}