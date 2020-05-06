#include<stdio.h>
#include<stdlib.h>

void doHello();
long factorial(int n);
long iterative_factorial(int n);
int main()
{
	int m;
	printf("请输入m的值：");
	scanf_s("%d", &m);
	//long result = factorial(m);
	long result = iterative_factorial(m);
	printf("m的阶乘是%ld\n", result);  //5的阶乘120


	getch();
	return 0;
}

void doHello()
{
	printf("Hello,World!\n");
	doHello();  //直接递归调用
}

long factorial(int n)  // 计算n的阶层
{
	if (n == 0)
		return 1;
	else
		return n*factorial(n - 1);  // 相当于 n*(n-1)!的（n-1）阶乘
}

long iterative_factorial(int n)
{
	int i;
	long r =1;
	for (int i = 1; i <= n; i++)
		r *= i;    // 递归的问题，都能用迭代问题解决
	return r;
}