#include<iostream>
#include<vector>
#include<algorithm>
#include<map>


int main(void)
{
	std::vector<int> arr = {1,2,3};

	for (auto it = arr.begin(); it != arr.end(); ++it)  // 这里用的auto，没用 迭代器类型 Iterator
	{
		std::cout << *it << std::endl;
	}

	// 使用基于范围的for循环
	for (auto n : arr)
	{
		std::cout << n << std::endl;
	}

	// 使用for循环的一些细节：在map中
	//std::map<std::string, int>mm =
	std::map<int, int>mm =
	{
		//{"11",1},{"22",2},{"33",3}
		{ 11,1 },{ 22,2 },{ 33,3 }
	};
	for (auto& val : mm)
	{
		std::cout << val.first << "->" << val.second << std::endl;  // 因为string没有重载<<操作符，我自己换成int,int了
	}
	system("pause");
	return 0;
}