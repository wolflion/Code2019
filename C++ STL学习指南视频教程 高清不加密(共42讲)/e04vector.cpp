// vector�� ��̬����
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Dog
{
	//Empty
};

void test01()
{
	vector<int>ivec;  //��ģ�壬����int�������ݵ�һ��vector
	vector<double>dvec;
	vector<string>svec;
	vector<Dog>Dogvec;  // �����Զ���Dog���͵�vector

	vector<int> a; // a��һ���յ�����
	vector<int> b(10, 2); // b��һ��������������10��2

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	b.push_back(10);
	b.push_back(11);  // �ŵ������������������ŵ�

	cout << a.size() << endl;  //3
	cout << b.size() << endl;  //12

	// ��Ҫ��int���͵�ѭ�����������Լ���size_type
	for (vector<int>::size_type i = 0; i != a.size(); ++i)
		cout << a[i]<<endl;

	cout << "ѭ��b" << endl;

	for (vector<int>::size_type i = 0; i != b.size(); ++i)
		cout << b[i] << endl;
}

void test02()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	vector<int> v2(v1);
	//vector<string> v3(v1);  //�������Ͳ�һ��

	vector<int> v4(10, -1);  //10��-1
	vector<string>v5(10, "hi!");
	vector<int> v6(10);  // ûд10������ʱ�򣬻�Ĭ��Ϊ10��0.   ��lionel��
	vector<string> v7(10);  //10���մ�

	cout << v1[0] << endl;  // 10
	cout << v2[0] << endl;  // 10
	cout << v4[0] << endl;  // -1
	cout << v5[0] << endl;  // hi!
	cout << v6[0] << endl;  // 0
	cout << v7[0] << endl;  // �մ�

	v1[0] = 100;
	cout << v1[0] << endl;  // 10
	v7[0] = "hello!";
	cout << v7[0] << endl;  // hello!
}


void test03()
{

	cout << "������5��������" << endl;
	vector<int> ivec;  // �յģ�һ������û�У�
	cout << ivec.size() << endl; // 0

#if 0
	// д��û���⣬����Ϊǰ���ǿյģ�û���±꣬��û�����±������
	// ���ֽ����������1�������ʱ��͸�ֵ����2����push_back()���
	for (vector<int>::size_type ix = 0; ix != 10; ++ix)
		cin >> ivec[ix];
#endif

	// vector�±���������Ԫ�أ�������push_back
	int k;
	for (vector<int>::size_type ix = 0; ix != 5; ++ix)
	{
		cin >> k;
		ivec.push_back(k);
	}

	cout << "��ʾvector��������ݣ�" << endl;
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
	{
		cout << ivec[ix] << endl;
	}

	cout << "������һЩ�ַ�����" << endl;
	string word;
	vector<string>text;
	while (cin>>word)
	{
		text.push_back(word);  // ctrl+z����
	}

	cout << "����ַ�����" << endl;
	for (vector<string>::size_type i = 0; i != text.size(); ++i)
		cout << text[i] << endl;
}


int main()
{
	test03();
	//test02();
//	test01();
	getchar();
	return 0;
}