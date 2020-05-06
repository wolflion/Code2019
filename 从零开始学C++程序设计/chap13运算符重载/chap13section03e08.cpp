//13-3 类型转换运算符重载

// 13-3-1 类类型转换为基本数据类型  【CH13_08.cpp】

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
	operator float();   //重载类型转换运算符号的函数原型声明
	float Get_Rate()
	{
		return(Exchange_Rate); // 返回汇率比
	}
private:
	int RMB_Yuan;
	float Exchange_Rate;
};

istream& operator >> (istream& in, Dollar& Tmp_Money)
{
	cout << "请输入1美元可兑换的人民币数量：";
	in >> Tmp_Money.Exchange_Rate; // 获取汇率比          【6.9】
	cout << "请输入您要兑换的人民币数：";
	in >> Tmp_Money.RMB_Yuan;  // 取得要兑换的人民币金额   【5000】
	return(in);
}

ostream& operator <<(ostream& out, Dollar& Tmp_Money)
{
	out << Tmp_Money.RMB_Yuan << " 元";
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
	cin >> RMB;     //   【调用了line26行的 >> 重载】
	USD = (float)RMB;  // 调用重载类型运算符
	cout << endl;
	cout << "汇率比（美元：人民币）= 1：" << RMB.Get_Rate() << endl;
	cout << "要兑换的人民币金额：" << RMB << endl;
	cout << "可兑换美元：" << USD << " 元" << endl;

	system("pause");
	return 0;
}
