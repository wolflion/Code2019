// vector是 动态数组
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
	vector<int>ivec;  //类模板，保存int类型数据的一个vector
	vector<double>dvec;
	vector<string>svec;
	vector<Dog>Dogvec;  // 保存自定义Dog类型的vector

	vector<int> a; // a是一个空的容器
	vector<int> b(10, 2); // b是一个容器，里面有10个2

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	b.push_back(10);
	b.push_back(11);  // 放到向量里的数据是有序号的

	cout << a.size() << endl;  //3
	cout << b.size() << endl;  //12

	// 不要用int类型的循环变量，用自己的size_type
	for (vector<int>::size_type i = 0; i != a.size(); ++i)
		cout << a[i]<<endl;

	cout << "循环b" << endl;

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
	//vector<string> v3(v1);  //两个类型不一样

	vector<int> v4(10, -1);  //10个-1
	vector<string>v5(10, "hi!");
	vector<int> v6(10);  // 没写10个几的时候，会默认为10个0.   【lionel】
	vector<string> v7(10);  //10个空串

	cout << v1[0] << endl;  // 10
	cout << v2[0] << endl;  // 10
	cout << v4[0] << endl;  // -1
	cout << v5[0] << endl;  // hi!
	cout << v6[0] << endl;  // 0
	cout << v7[0] << endl;  // 空串

	v1[0] = 100;
	cout << v1[0] << endl;  // 10
	v7[0] = "hello!";
	cout << v7[0] << endl;  // hello!
}


void test03()
{

	cout << "请输入5个整数：" << endl;
	vector<int> ivec;  // 空的，一个数都没有！
	cout << ivec.size() << endl; // 0

#if 0
	// 写法没问题，【因为前面是空的，没有下标，就没法用下标操作】
	// 两种解决方案：（1）定义的时候就给值；（2）用push_back()添加
	for (vector<int>::size_type ix = 0; ix != 10; ++ix)
		cin >> ivec[ix];
#endif

	// vector下标操作不添加元素，必须用push_back
	int k;
	for (vector<int>::size_type ix = 0; ix != 5; ++ix)
	{
		cin >> k;
		ivec.push_back(k);
	}

	cout << "显示vector里面的数据：" << endl;
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
	{
		cout << ivec[ix] << endl;
	}

	cout << "请输入一些字符串：" << endl;
	string word;
	vector<string>text;
	while (cin>>word)
	{
		text.push_back(word);  // ctrl+z结束
	}

	cout << "输出字符串：" << endl;
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