#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int *a, int x, int left, int right);

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num;
	printf("������Ҫ���ҵ�����");
	scanf_s("%d", &num);  //����һ������"\n"������������ġ� **lionel**   ��scanf��Ϊɶ�������뻻�С�
	int result = BinarySearch(arr, num, 0, 9);  //left,right��������
	if (result < 0)
		printf("û�ҵ���\n");
	else
		printf("�������%d��Ԫ�ص�ֵ��Ҫ���ҵ�num %d.\n",result+1,num); //������0��ʼ������+1
	getch();
	return 0;
}

int BinarySearch(int *a, int x, int left, int right)  //a�����飻x��Ҫ���ҵĹؼ��֣�left�ǿ�ʼԪ�ص�λ�ã�right�����Ԫ�ص�λ��
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
		return BinarySearch(a, x, left, right);  //�ݹ�ʵ��
	}
	return -1;
}