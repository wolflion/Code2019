#include<stdio.h>
#define SWAP(x,y,t)  ((t)=(x),(x)=(y),(y)=(t))
int count;
void perm(char* list, int k, int m);

int main(void)
{
	// 3��Ԫ����6�֣�4��Ԫ�ؾ���24�֣��൱�������Ľ׳�
	char list[] = "abc";  // �ַ�����������
	perm(list, 0, 2);  // 0,1,2  ����Ԫ�ؽ���  
	printf("�ܹ���%d������ʽ.", count);
	getchar();
	return 0;
}

void perm(char* list, int k, int m)
{
	char temp;
	if (k == m)
	{
		printf("%s\n",list);
		count++;
	}
	else
	{
		for (int i = k; i <= m; i++)
		{
			SWAP(list[i], list[k], temp);
			perm(list, k + 1, m);
			SWAP(list[i], list[k], temp);
		}
	}

	// ԭ�ȵ�ʵ��
#if 0
	//a��ͷ�ģ�����bc����������
	SWAP(list[0], list[0], temp);         // ��ʵ���Բ��������
	perm(list, 1, 2);  // ʣ�µ�Ԫ�ص�2����
	SWAP(list[0], list[0], temp);

	//b��ͷ�ģ�����ac����������
	SWAP(list[0], list[1], temp);  // b��a������λ��
	perm(list, 1, 2);
	SWAP(list[0], list[1], temp);   // Ҫ����ԭ�ȵ�λ��

	//c��ͷ�ģ�����ab����������
	SWAP(list[0], list[2], temp);  // c��a������λ��
	perm(list, 1, 2);
	SWAP(list[2], list[0], temp);   // Ҫ����ԭ�ȵ�λ��
#endif
}