//12-1-1��������
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
	int fires;   // �������
	int safes;  // �������
	float countsafe(void);
};

void Baseball::inputplayer(void)
{
	cout << "����ߣ�";
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
	Baseball b[3]; //������
	int i;
	for (i = 0; i < 3; i++)
	{
		b[i].inputplayer();
	}

	//��ʾ
	for (i = 0; i < 3; i++)
	{
		b[i].showplayer();
	}

	system("pause");
	return 0;
}