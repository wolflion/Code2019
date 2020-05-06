#include<stdio.h>

int BinSearch(int x, int v[], int n);
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10};  //�������ź����
	int result;  //������ҵĽ��
	int num = 8;  //�����ҵ���
	result = BinSearch(num, arr, 10);
	if (result == -1)
		printf("û�ҵ�");
	else
		printf("���±�arr[%d]�ҵ���%d\n", result, num);
	getchar();
	return 0;
}

int BinSearch(int x, int v[], int n)  // ����v��������n����������x
{
	int low=0, high=n-1, mid;  //high��n-1����Ϊ�Ǵ�0��ʼ��һ����n������Ҫ��ʼ��һ�¡�
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