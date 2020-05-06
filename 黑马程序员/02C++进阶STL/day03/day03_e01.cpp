//
// Created by lionel on 2019/8/20.
//

// 01 C输入和输出流_缓冲区_rec

/*
 * 输入和输出 是相对程序而说的   【标准I/O，文件I/O】
 * 键盘输入叫标准输入；输出到显示器叫标准输出
 * */

#include <iostream>
using namespace std;

int main()
{
    //istream cin
    // cout只是一个全局对象而已；【流对象跟显示器关联】
    // cerr和clog是标准错误或日志，默认输出到显示器  【cerr没有缓冲区，clog有缓冲区】

    // 缓冲区：内存开辟的一块内存。char buff[3000]这样而已
    // cin从缓冲区拿数据，如果没有，就等键盘输入。

    cout<<"hello world"; //这个时候不会输出，先放到缓冲区了
    cout<<"hello world"<<endl; // 加上这个，才输出  【endl先换行，然后是刷新缓冲区】
    return 0;
}