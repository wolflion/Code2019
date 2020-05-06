#include<stdio.h>
#define SWAP(x,y,t)  ((t)=(x),(x)=(y),(y)=(t))
int count;
void perm(char* list, int k, int m);

int main(void)
{
	// 3个元素是6种；4个元素就是24种，相当于数量的阶乘
	char list[] = "abc";  // 字符的所有排列
	perm(list, 0, 2);  // 0,1,2  三个元素交换  
	printf("总共有%d种排序方式.", count);
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

	// 原先的实现
#if 0
	//a开头的，后面bc的所有排列
	SWAP(list[0], list[0], temp);         // 其实可以不用这个的
	perm(list, 1, 2);  // 剩下的元素的2个标
	SWAP(list[0], list[0], temp);

	//b开头的，后面ac的所有排列
	SWAP(list[0], list[1], temp);  // b和a交换了位置
	perm(list, 1, 2);
	SWAP(list[0], list[1], temp);   // 要换回原先的位置

	//c开头的，后面ab的所有排列
	SWAP(list[0], list[2], temp);  // c和a交换了位置
	perm(list, 1, 2);
	SWAP(list[2], list[0], temp);   // 要换回原先的位置
#endif
}