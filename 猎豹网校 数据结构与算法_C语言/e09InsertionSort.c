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

void InsertionSort(int  *a, int n)  //�����ָ�룬�������Ŀ
{
	int in, out, temp;//in�������˵��±�ţ�out���������˵��±�ţ�temp����ʱ����
	for (out = 1; out < n; out++)  // ������ôҲҪ��һ����
	{
		temp = a[out];
		in = out; // ������
		// �����ڵ��ж�
		while (in>0&&a[in-1]>temp)   // ���ڵ�ǰһ������temp
		{
			a[in] = a[in - 1];
			in--;
		}
		a[in] = temp;
	}
}