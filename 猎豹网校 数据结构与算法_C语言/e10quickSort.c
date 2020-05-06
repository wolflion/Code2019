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

void QuickSort(int *a, int l, int r) // ����ָ�룬��������±ꣻ�����ұ��±�  ���õ��˵ݹ顿
{
	int i, j, pivot;  // pivot�ǻ�׼Ԫ��
	if (l< r)
	{
	i = l;
	j = r;
	pivot = a[i];
	while (i < j)
	{
		while (i<j&&a[j]>pivot)
		{
			j--; // ������������ҵ�1��С��pivot����
		}

		if (i < j)
		{
			a[i] = a[j];
			i++;
		}

		while (i<j&&a[i]<pivot)
		{
			i++; // �������ұ����ҵ�1������pivot����
		}

		if (i < j)
		{
			a[j] = a[i];
			j--;
		}
	}
	a[i] = pivot;
	QuickSort(a, l, i - 1);//��ߵ�
	QuickSort(a, i + 1, r);//�ұߵ�
	}
}