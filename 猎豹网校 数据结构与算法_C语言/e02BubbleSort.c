#include<stdio.h>

void BubbleSort(int a[], int n);

int main()
{
	int arr[10] = { 2,4,6,8,0,1,3,5,7,9 };
	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
			printf("%d\n", arr[i]);
		else
			printf("%d ", arr[i]);
	}
	BubbleSort(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
			printf("%d\n", arr[i]);
		else
			printf("%d ", arr[i]);
	}

	getchar();
	return 0;
}

void BubbleSort(int a[], int n)  //n������Ԫ��
//void BubbleSort(int *a, int n)
{
	int i, j, t; //i,j��ѭ����t�ǽ���
	for(i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
