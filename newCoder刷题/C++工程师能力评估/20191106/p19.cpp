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
    MyClass obj3 = obj1;//obj3�������ڣ��͵��ÿ������캯����obj3�����ˣ����ø�����������غ���   ������ط�ûŪ���ס�
	// ������������ӵ�
	MyClass obj4;  // ���� ��� 0
	obj4 = obj1;  // ������������أ����3
	system("pause");
    return 0;
}

/*
�ҵĴ��ǣ�123444  ������
*/

// https://www.nowcoder.com/profile/4496301/test/29149377/15947#summary