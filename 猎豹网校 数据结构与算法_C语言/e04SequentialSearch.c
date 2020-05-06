#include<stdio.h>

int SequentialSearch(int *a, int n, int key);
int main()
{
	int array[10] = { 2,4,6,8,0,1,3,5,7,9 };
	int num; //让用户输入一个要查找的关键字
	int result; //返回的结果
	printf("请输入要查找的数:");
	scanf_s("%d", &num);
	result = SequentialSearch(array, 10, num);
	if (result == -1)
		printf("没找到!\n");
	else
	{
		printf("在数组中的位置是[%d].\n", result);    //输入5的话，显示位置是7；
	}
	getch();
	return 0;
}

int SequentialSearch(int *a, int n,int key)  //*a是数组，n是数组长度，key是关键字，返回数组元素的下标
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
			return i;
#if 0
		else
			return -1;
#endif
	}
	if (i == n)
		return -1;  //跟我写得不一样
}