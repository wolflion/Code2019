#include<stdio.h>
char *myString()
{
    char buffer[6] = {0};
    char *s = "Hello World!";
    for (int i = 0; i < sizeof(buffer) - 1; i++)
    {
        buffer[i] = *(s + i);
    }
    return buffer;  // 这个地方输出是Hello    【这个buffer不是new的，只是保存在栈区，函数结束，栈区被释放掉了，产生了野指针】
}
int main(int argc, char **argv)
{
    printf("%s\n", myString());
	getchar();
    return 0;
}

/*我的答案是hello,是错误的*/

// https://www.nowcoder.com/profile/4496301/test/29149377/15953#summary