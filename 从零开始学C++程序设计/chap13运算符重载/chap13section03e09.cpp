// 13-3-2 基本数据类型转换为类类型

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
		cout << "执行Dollar(float Money)构造函数" << endl;
		RMB_Yuan = Money*Exchange_Rate; // 计算可兑换的人民币数量
	}

	friend ostream& operator <<(ostream& out, Dollar& Tmp_Money);
	Dollar operator=(float Money);
private:
	int RMB_Yuan;
	float Exchange_Rate1; // 表示1美元可兑换的人民币金额
};

ostream& operator <<(ostream& out, Dollar& Tmp_Money)
{
	out << Tmp_Money.RMB_Yuan << " 元";
	return(out);
}

Dollar Dollar::operator=(float Money)
{
	cout << "执行重载=运算符函数" << endl;
	RMB_Yuan = Money*Exchange_Rate;
	return(*this);
}

int main()
{
	Dollar RMB;
	float USD, Rate;
	cout << "请输入1美元可兑换的人民币数量：";
	cin >> Rate;                                                                         // 6.9
	cout << "请输入您要兑换的美元金额：";
	cin >> USD;                                                                          // 200
	Exchange_Rate = Rate;
	RMB = USD;
	cout << endl;
	cout << "汇率比（美元：人民币）=1：" << Exchange_Rate << endl;
	cout << "要兑换的美元金额：" << USD << "元" << endl;
	cout << "可兑换的人民币：" << RMB << endl;

	system("pause");
	return 0;
}