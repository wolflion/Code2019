//
// Created by lionel on 2019/8/20.
//

//02 C标准输入流_rec

#include <iostream>
using namespace std;

//标准输入流
void test01()
{
#if 0
    char ch;
    // 回车才是到缓冲区 “ctrl+C就是EOF”
    while(cin.get() != EOF)  // 从缓冲区拿数据，【一直等到缓冲区有数据，就是**阻塞**】
    {
        cout<<ch<<endl;
    }
#endif

    //cin.get
    char ch2;
    //cin.get(ch2); //读取一个字符
    char buf[256] = {0};
    //cin.get(buf,256);  // 从缓冲区读一个字符串

    cin.getline(buf,256);  // 读一行数据，到\n为止，不读换行符
    cout<<buf<<endl;
}

//cin.ignore 忽略当前的字符
void test02()
{
    char ch;
    cin.get(ch);//缓冲区没有数据，就阻塞，等待   【输入asdf】
    cout<<ch<<endl;  //输出a
    cin.ignore(); //忽略s   【还可以加参数】--缓冲区数据就没有了
    cin.get(ch);
    cout<<ch<<endl; // 输出d
}

//cin.peek() 只是看看缓冲区的数据
void test03()
{
    cout<<"请输入数字或者字符串："<<endl;
    char ch;
    ch = cin.peek();//偷窥一下缓冲区，返回第一个字符
    if(ch >= '0'&& ch<='9')
    {
        int number;
        cin>>number;
        cout<<"您输入的是数字："<<number<<endl;
    } else
    {
        char buf[256] = {0};
        cin>>buf;
        cout<<"您输入的是字符串："<<buf<<endl;
    }
}

// cin.putback
void test04()
{
    cout<<"请输入数字或者字符串："<<endl;
    char ch;
    cin.get(ch);  // 从缓冲区取走一个字符
    if(ch>='0'&& ch<='9')
    {
        //ch放回到缓冲区
        cin.putback(ch);
        int number;
        cin>>number;
        cout<<"您输入的是数字："<<number<<endl;
    }else
    {
        cin.putback(ch);
        char buf[256] = {0};
        cin>>buf;
        cout<<"您输入的是字符串："<<buf<<endl;
    }
}

int main()
{
    //test01();
    //test02();
    //test03();
    test04();
    return 0;
}