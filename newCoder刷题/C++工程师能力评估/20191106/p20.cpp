#include<stdio.h>
char *myString()
{
    char buffer[6] = {0};
    char *s = "Hello World!";
    for (int i = 0; i < sizeof(buffer) - 1; i++)
    {
        buffer[i] = *(s + i);
    }
    return buffer;  // ����ط������Hello    �����buffer����new�ģ�ֻ�Ǳ�����ջ��������������ջ�����ͷŵ��ˣ�������Ұָ�롿
}
int main(int argc, char **argv)
{
    printf("%s\n", myString());
	getchar();
    return 0;
}

/*�ҵĴ���hello,�Ǵ����*/

// https://www.nowcoder.com/profile/4496301/test/29149377/15953#summary