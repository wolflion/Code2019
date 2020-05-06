#include<stdio.h>

int BinSearch(int x, int v[], int n);
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10};  //必须是排好序的
	int result;  //保存查找的结果
	int num = 8;  //被查找的数
	result = BinSearch(num, arr, 10);
	if (result == -1)
		printf("没找到");
	else
		printf("在下标arr[%d]找到了%d\n", result, num);
	getchar();
	return 0;
}

int BinSearch(int x, int v[], int n)  // 数组v，里面有n个数，查找x
{
	int low=0, high=n-1, mid;  //high是n-1，因为是从0开始，一共是n个。【要初始化一下】
	while (low<=high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}