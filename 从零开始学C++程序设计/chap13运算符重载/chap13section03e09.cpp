// 13-3-2 ������������ת��Ϊ������

#include <iostream>
#include <cstdlib>
using namespace std;

float Exchange_Rate;
class Dollar
{
public:
	Dollar() :RMB_Yuan(1), Exchange_Rate1(40) {}
	Dollar(int Money, float Rate) :RMB_Yuan(Money), Exchange_Rate1(Rate) {}
	Dollar(float Money)
	{
		cout << "ִ��Dollar(float Money)���캯��" << endl;
		RMB_Yuan = Money*Exchange_Rate; // ����ɶһ������������
	}

	friend ostream& operator <<(ostream& out, Dollar& Tmp_Money);
	Dollar operator=(float Money);
private:
	int RMB_Yuan;
	float Exchange_Rate1; // ��ʾ1��Ԫ�ɶһ�������ҽ��
};

ostream& operator <<(ostream& out, Dollar& Tmp_Money)
{
	out << Tmp_Money.RMB_Yuan << " Ԫ";
	return(out);
}

Dollar Dollar::operator=(float Money)
{
	cout << "ִ������=���������" << endl;
	RMB_Yuan = Money*Exchange_Rate;
	return(*this);
}

int main()
{
	Dollar RMB;
	float USD, Rate;
	cout << "������1��Ԫ�ɶһ��������������";
	cin >> Rate;                                                                         // 6.9
	cout << "��������Ҫ�һ�����Ԫ��";
	cin >> USD;                                                                          // 200
	Exchange_Rate = Rate;
	RMB = USD;
	cout << endl;
	cout << "���ʱȣ���Ԫ������ң�=1��" << Exchange_Rate << endl;
	cout << "Ҫ�һ�����Ԫ��" << USD << "Ԫ" << endl;
	cout << "�ɶһ�������ң�" << RMB << endl;

	system("pause");
	return 0;
}