// 13-1-2 һԪ��������� �������Ա�������ǳ�Ա�������ֳ�����
// ��Ա���� ʱ ���и�this����

#include <iostream>
#include <cstdlib>
using namespace std;

class IsZero
{
public:
	IsZero(int n):Num(n){}
	IsZero():Num(-1){}

	bool operator!(); // ��Ա���������Բ��üӲ��������ǳ�Ա������Ҫ�Ӹ����� !(����)��
private:
	int Num;
};

bool IsZero::operator!()   // ��Ҫ��������
{
	if (Num >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	IsZero Num1(3),Num2;
	if (!Num1 )
	{
		cout << "Num1���ڵ���0" << endl;
	}
	if (!Num2)  // -1  ���ص���false  ����!�� IsZero����ת����bool���͡������������֧û��
	{
		cout<<"Num1С��0"<<endl;
	}
	system("pause");
	return 0;
}