//13-3 ����ת�����������

// 13-3-1 ������ת��Ϊ������������  ��CH13_08.cpp��

#include <iostream>
#include <cstdlib>
using namespace std;

class Dollar
{
public:
	Dollar():RMB_Yuan(1),Exchange_Rate(40){}
	Dollar(int Money, float Rate):RMB_Yuan(Money),Exchange_Rate(Rate){}
	friend istream& operator >> (istream& in, Dollar& Tmp_Money);
	friend ostream& operator <<(ostream& out, Dollar& Tmp_Money);
	operator float();   //��������ת��������ŵĺ���ԭ������
	float Get_Rate()
	{
		return(Exchange_Rate); // ���ػ��ʱ�
	}
private:
	int RMB_Yuan;
	float Exchange_Rate;
};

istream& operator >> (istream& in, Dollar& Tmp_Money)
{
	cout << "������1��Ԫ�ɶһ��������������";
	in >> Tmp_Money.Exchange_Rate; // ��ȡ���ʱ�          ��6.9��
	cout << "��������Ҫ�һ������������";
	in >> Tmp_Money.RMB_Yuan;  // ȡ��Ҫ�һ�������ҽ��   ��5000��
	return(in);
}

ostream& operator <<(ostream& out, Dollar& Tmp_Money)
{
	out << Tmp_Money.RMB_Yuan << " Ԫ";
	return(out);
}

Dollar::operator float()
{
	float US_Dollar;
	US_Dollar = (float)RMB_Yuan / Exchange_Rate;
	return(US_Dollar);
}

int main()
{
	Dollar RMB;
	float USD;
	cin >> RMB;     //   ��������line26�е� >> ���ء�
	USD = (float)RMB;  // �����������������
	cout << endl;
	cout << "���ʱȣ���Ԫ������ң�= 1��" << RMB.Get_Rate() << endl;
	cout << "Ҫ�һ�������ҽ�" << RMB << endl;
	cout << "�ɶһ���Ԫ��" << USD << " Ԫ" << endl;

	system("pause");
	return 0;
}
