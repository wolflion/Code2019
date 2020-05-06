//12-1-1对象数组
#include <iostream>
#include <cstdlib>
using namespace std;

class Baseball
{
public:
	void inputplayer();
	void showplayer();
private:
	char player[20];
	int fires;   // 击打次数
	int safes;  // 安打次数
	float countsafe(void);
};

void Baseball::inputplayer(void)
{
	cout << "打击者：";
	cin >> player >> fires >> safes;
}

void Baseball::showplayer(void)
{
	float fs;
	fs = countsafe();
	cout << "=====================" << endl;
	cout << player << fires << safes << fs << endl;
}

float Baseball::countsafe()
{
	float counts;
	counts = (float(safes) / float(fires));
	return counts;
}

int main()
{
	Baseball b[3]; //类数组
	int i;
	for (i = 0; i < 3; i++)
	{
		b[i].inputplayer();
	}

	//显示
	for (i = 0; i < 3; i++)
	{
		b[i].showplayer();
	}

	system("pause");
	return 0;
}