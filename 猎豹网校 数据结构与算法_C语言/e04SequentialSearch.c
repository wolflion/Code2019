#include<stdio.h>

int SequentialSearch(int *a, int n, int key);
int main()
{
	int array[10] = { 2,4,6,8,0,1,3,5,7,9 };
	int num; //���û�����һ��Ҫ���ҵĹؼ���
	int result; //���صĽ��
	printf("������Ҫ���ҵ���:");
	scanf_s("%d", &num);
	result = SequentialSearch(array, 10, num);
	if (result == -1)
		printf("û�ҵ�!\n");
	else
	{
		printf("�������е�λ����[%d].\n", result);    //����5�Ļ�����ʾλ����7��
	}
	getch();
	return 0;
}

int SequentialSearch(int *a, int n,int key)  //*a�����飬n�����鳤�ȣ�key�ǹؼ��֣���������Ԫ�ص��±�
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
		return -1;  //����д�ò�һ��
}