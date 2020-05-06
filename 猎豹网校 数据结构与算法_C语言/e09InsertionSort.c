#include<stdio.h>

void InsertionSort(int  *a, int n);
int main()
{
	int arr[10] = { 2,4,6,8,0,1,5,9,7,3 };
	InsertionSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",arr[i]);
	}
	getch();
	return 0;
}

void InsertionSort(int  *a, int n)  //数组的指针，数组的数目
{
	int in, out, temp;//in在室内人的下标号，out是在室外人的下标号，temp是临时变量
	for (out = 1; out < n; out++)  // 室内怎么也要有一个人
	{
		temp = a[out];
		in = out; // 索引号
		// 对室内的判断
		while (in>0&&a[in-1]>temp)   // 室内的前一个大于temp
		{
			a[in] = a[in - 1];
			in--;
		}
		a[in] = temp;
	}
}