#include "stdio.h"
int sum(int a)
{
    auto int c = 0;
    static int b = 3;
    c += 1;   // aoto临时变量，每次都是原来的值，即0
    b += 2;   // static是累加的，第1次加后是5，第2次变成7+2了
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