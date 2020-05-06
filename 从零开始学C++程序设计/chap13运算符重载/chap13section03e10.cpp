// 13-3-3 ������ת��������������
#include <iostream>
#include <cstdlib>
using namespace std;

class USD; //����USD��

class RMB  //�������ת�����Զ�����
{
public:
	RMB():RMB_Exchange_Rate(40){}
	RMB(float Rate):RMB_Exchange_Rate(Rate){}
	friend istream& operator >> (istream& in, RMB& Tmp_Money);
	operator USD();
private:
	float RMB_Exchange_Rate;
};

class USD  //�������ת�����Զ�����
{
public:
	USD() :US_Exchange_Rate(40) {}
	USD(float Rate) :US_Exchange_Rate(Rate) {}
	friend ostream& operator<< (ostream& out, USD& Tmp_Money);
	operator USD();
private:
	float US_Exchange_Rate;
};

istream& operator >> (istream& in, RMB& Tmp_Money)
{
	cout << "��������ʱȣ�����ң���Ԫ��" << endl << "1Ԫ����ң���Ԫ";
	in >> Tmp_Money.RMB_Exchange_Rate;                                   // ��0.14493��
	return(in);
}

ostream& operator<< (ostream& out, USD& Tmp_Money)
{
	out << Tmp_Money.US_Exchange_Rate << " Ԫ" << endl;
	return(out);
}

RMB::operator USD()
{
	float US_Exchange_Rate = 1 / RMB_Exchange_Rate;
	return(USD(US_Exchange_Rate));  //����USD��
}

int main()
{
	RMB RMB_Yuan;
	USD US_Dollar;
	cin >> RMB_Yuan;     
	US_Dollar = RMB_Yuan;
	cout << endl;
	cout << "���ڻ��ʱȣ���Ԫ������ң�" << endl << "1��Ԫ��" << US_Dollar;

	system("pause");
	return 0;
}