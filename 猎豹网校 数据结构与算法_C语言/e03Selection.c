#include<stdio.h>

void SelectionSort(int *a, int n);

int main()
{
	int arr[10] = {2,4,6,8,0,1,3,5,7,9};
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	SelectionSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	getchar();
	return 0;
}

void SelectionSort(int *a, int n)
{
	int i, j, temp,min; //min����Сֵ��������
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
				min = j;  //ֻ���ҵ���С��λ�ã�������
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}