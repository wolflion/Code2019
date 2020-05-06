//3.4 STL迭代器  【5个迭代器】
// 输入、输出、前向、双向、随机访问、  【不同的迭代器对于某个具体的场景，效率不一样】

#include<iostream>
#include<iterator>
using namespace std;

//e3_2.cpp 例3.2 利用istream_iteraotr迭代器迭代标准输入流
int main(int argc, char* argv[])
{
    cout<<"请输入数据（如 111 222 333,):";
    istream_iterator<int>a(cin);  //建立键盘输入流，并用istream_iterator枚举整型数据
    istream_iterator<int>b ;   //建立输入流结束迭代器
    while(1)
    {
        cout<< *a <<endl; //输出整型数据-> 调用operator*()
        a++;    //迭代器指针指向下一个元素-> 调用operator++(int)
        if(a == b) // 如果当前迭代器等于结束迭代器，则->调用operator==
        {
            break;   //退出while循环
        }
    }

    // 输出迭代器，不行就用另一个main()来实现一下
    cout<<"输出迭代器演示结果为：";
    ostream_iterator<int>myout(cout,"\t");  //创建标准输出迭代器
    *myout=1;
    myout++;
    *myout=2;
    myout++;
    *myout=3;

    sytem("pause");
    return 0;
}

