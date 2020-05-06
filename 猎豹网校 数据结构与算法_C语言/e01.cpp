#include<stdio.h>
#include<stdlib.h>

void swap(int x, int y);
void swap_p(int *px, int *py);
#define swap_define(x,y,t) ((t)=(x),(x)=(y),(y)=(t))    //����Ҫ�ֺ�
void swap_r(int& rx, int& ry);

int main()
{
	int a, b, temp;
	a = 1;
	b = 10;
	printf("a=%d, b = %d\n", a, b);

#if 0
	temp = a;
	a = b;
	b = temp;
#endif

	swap(a, b);
	printf("swap(a, b) a=%d, b = %d\n", a, b);

	swap_p(&a, &b);
	printf("swap_p(&a, &b) a=%d, b = %d\n", a, b);

	swap_define(a, b, temp);
	printf("swap_define(x,y,t) a=%d, b = %d\n", a, b);   // ���Ƕ���һ����10��1�Ľ������������a=1,b=10

	swap_r(a, b);
	printf("swap_r(int& rx, int& ry) a=%d, b = %d\n", a, b);
	getchar();
	return 0;
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap_p(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

void swap_r(int& rx, int& ry)
{
	int temp;
	temp = rx;
	rx = ry;
	ry = temp;
}