#include "stdio.h"
int sum(int a)
{
    auto int c = 0;
    static int b = 3;
    c += 1;   // aoto��ʱ������ÿ�ζ���ԭ����ֵ����0
    b += 2;   // static���ۼӵģ���1�μӺ���5����2�α��7+2��
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++) 
    { 
        printf("%d,", sum(a));  // 8,10,12,14,16
    } 
	getchar();
} 