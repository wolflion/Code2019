#include<stdio.h>
#include<stdlib.h>

void doHello();
long factorial(int n);
long iterative_factorial(int n);
int main()
{
	int m;
	printf("������m��ֵ��");
	scanf_s("%d", &m);
	//long result = factorial(m);
	long result = iterative_factorial(m);
	printf("m�Ľ׳���%ld\n", result);  //5�Ľ׳�120


	getch();
	return 0;
}

void doHello()
{
	printf("Hello,World!\n");
	doHello();  //ֱ�ӵݹ����
}

long factorial(int n)  // ����n�Ľײ�
{
	if (n == 0)
		return 1;
	else
		return n*factorial(n - 1);  // �൱�� n*(n-1)!�ģ�n-1���׳�
}

long iterative_factorial(int n)
{
	int i;
	long r =1;
	for (int i = 1; i <= n; i++)
		r *= i;    // �ݹ�����⣬�����õ���������
	return r;
}