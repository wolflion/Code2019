#include<iostream>
#include<vector>
#include<algorithm>
#include<map>


int main(void)
{
	std::vector<int> arr = {1,2,3};

	for (auto it = arr.begin(); it != arr.end(); ++it)  // �����õ�auto��û�� ���������� Iterator
	{
		std::cout << *it << std::endl;
	}

	// ʹ�û��ڷ�Χ��forѭ��
	for (auto n : arr)
	{
		std::cout << n << std::endl;
	}

	// ʹ��forѭ����һЩϸ�ڣ���map��
	//std::map<std::string, int>mm =
	std::map<int, int>mm =
	{
		//{"11",1},{"22",2},{"33",3}
		{ 11,1 },{ 22,2 },{ 33,3 }
	};
	for (auto& val : mm)
	{
		std::cout << val.first << "->" << val.second << std::endl;  // ��Ϊstringû������<<�����������Լ�����int,int��
	}
	system("pause");
	return 0;
}