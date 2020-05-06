#include<stdio.h>

void QuickSort(int *a, int l, int r);

int main()
{
	int k[] = { 8,6,4,2,0,1,3,5,7,9 };
	QuickSort(k, 0, 9);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",k[i]);
	}
	getchar();
	return 0;
}

void QuickSort(int *a, int l, int r) // 数组指针，数组左边下标；数组右边下标  【用到了递归】
{
	int i, j, pivot;  // pivot是基准元素
	if (l< r)
	{
	i = l;
	j = r;
	pivot = a[i];
	while (i < j)
	{
		while (i<j&&a[j]>pivot)
		{
			j--; // 从右向左边来找第1个小于pivot的数
		}

		if (i < j)
		{
			a[i] = a[j];
			i++;
		}

		while (i<j&&a[i]<pivot)
		{
			i++; // 从左向右边来找第1个大于pivot的数
		}

		if (i < j)
		{
			a[j] = a[i];
			j--;
		}
	}
	a[i] = pivot;
	QuickSort(a, l, i - 1);//左边的
	QuickSort(a, i + 1, r);//右边的
	}
}