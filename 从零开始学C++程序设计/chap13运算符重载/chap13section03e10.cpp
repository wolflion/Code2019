// 13-3-3 类类型转换成其他类类型
#include <iostream>
#include <cstdlib>
using namespace std;

class USD; //声明USD类

class RMB  //计算汇率转换的自定义类
{
public:
	RMB():RMB_Exchange_Rate(40){}
	RMB(float Rate):RMB_Exchange_Rate(Rate){}
	friend istream& operator >> (istream& in, RMB& Tmp_Money);
	operator USD();
private:
	float RMB_Exchange_Rate;
};

class USD  //计算汇率转换的自定义类
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
	cout << "请输入汇率比（人民币：美元）" << endl << "1元人民币：美元";
	in >> Tmp_Money.RMB_Exchange_Rate;                                   // 【0.14493】
	return(in);
}

ostream& operator<< (ostream& out, USD& Tmp_Money)
{
	out << Tmp_Money.US_Exchange_Rate << " 元" << endl;
	return(out);
}

RMB::operator USD()
{
	float US_Exchange_Rate = 1 / RMB_Exchange_Rate;
	return(USD(US_Exchange_Rate));  //返回USD类
}

int main()
{
	RMB RMB_Yuan;
	USD US_Dollar;
	cin >> RMB_Yuan;     
	US_Dollar = RMB_Yuan;
	cout << endl;
	cout << "等于汇率比（美元：人民币）" << endl << "1美元：" << US_Dollar;

	system("pause");
	return 0;
}