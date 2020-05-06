#include<iostream>
using namespace std;
class MyClass
{
public:
    MyClass(int i = 0)
    {
        cout << i;
    }
    MyClass(const MyClass &x)
    {
        cout << 2;
    }
    MyClass &operator=(const MyClass &x)
    {
        cout << 3;
        return *this;
    }
    ~MyClass()
    {
        cout << 4;
    }
};
int main()
{
    MyClass obj1(1), obj2(2);
    MyClass obj3 = obj1;//obj3还不存在，就调用拷贝构造函数；obj3存在了，调用复制运算符重载函数   【这个地方没弄明白】
	// 这是我自已添加的
	MyClass obj4;  // 调用 输出 0
	obj4 = obj1;  // 调用运算符重载，输出3
	system("pause");
    return 0;
}

/*
我的答案是：123444  【错误】
*/

// https://www.nowcoder.com/profile/4496301/test/29149377/15947#summary