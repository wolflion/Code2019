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
		cout << "ʹ��Share��public����" << endl;
	}
protected:
	int b;
	void printB()
	{
		cout << "ʹ��Share��protected����" << endl;
	}
private:
	int a;
	void printA()
	{
		cout << "ʹ��Share��private����" << endl;
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
	fr.Access(&sh);  // ������Share���͵Ķ���ָ�룬���Ա��봫��&sh

	system("pause");
	return 0;
}