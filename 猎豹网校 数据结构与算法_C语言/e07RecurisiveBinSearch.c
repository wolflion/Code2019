#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int *a, int x, int left, int right);

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num;
	printf("请输入要查找的数：");
	scanf_s("%d", &num);  //放了一个换行"\n"，还是有问题的。 **lionel**   【scanf里为啥不能输入换行】
	int result = BinarySearch(arr, num, 0, 9);  //left,right是索引号
	if (result < 0)
		printf("没找到！\n");
	else
		printf("数组里第%d个元素的值是要查找的num %d.\n",result+1,num); //索引从0开始，所以+1
	getch();
	return 0;
}

int BinarySearch(int *a, int x, int left, int right)  //a是数组；x是要查找的关键字，left是开始元素的位置，right是最后元素的位置
{
	int middle;
	if (left <= right)
	{
		middle = (left + right) / 2;
		if (a[middle] == x)
			return middle;
		else if(a[middle]<x)
		{
			left = middle + 1;
		}
		else if (a[middle]>x)
		{
			right = middle - 1;
		}
		return BinarySearch(a, x, left, right);  //递归实现
	}
	return -1;
}