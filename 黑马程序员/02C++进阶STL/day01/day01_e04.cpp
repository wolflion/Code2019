//04 编译过程测试_rec.


#include<iostream>
using namespace std;

#define MAX 1024

int main()
{
    cout<<MAX<<endl;
    return 0;
}


/*
ESc  【3个流】
g++ -E index.cpp -o index.i   //前面都是 头文件的替换 ，把define 也给替换了
g++ -S index.i -o index.s     // 编译
g++ -c index.s -o index.o     // 汇编，生成了目标文件

g++ index.s -o index          // 链接  file index 来看文件类型
*/
