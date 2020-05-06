//
// Created by lionel on 2019/8/23.
//

//12 string_初始化_拼接_赋值_查找_rec.

#include <iostream>
#include <string>
using namespace std;

//初始化

void test01()
{
    string s1; //调用无参构造
    string s2(10,'a');
    string s3("abcdefg");
    string s4(s3);  //拷贝构造

    cout << s1 <<endl;
    cout << s2 <<endl;
    cout << s3 <<endl;
    cout << s4 <<endl;
}

//赋值操作
void test02()
{
    string s1;
    string s2("appp");
    s1 = "abcdef";
    cout<<s1<<endl;
    s1 = s2;
    cout<<s1<<endl;
    s1 = 'a';
    cout<<s1<<endl;
    // 成员方法assign方法赋值
    s1.assign("jkl");
    cout<<s1<<endl;
}


// 取值操作
void test03()
{
    string s1 = "abcdefg";
    //重载[]操作符
    for(int i=0;i<s1.size();i++)
    {
        cout<<s1[i]<<" ";
    }
    cout<<endl;

    //at成员函数
    for(int i=0;i<s1.size();i++)
    {
        cout<<s1.at(i)<<" ";
    }
    cout<<endl;

    //两个区别：
    /*
     * []如果越界了，直接挂了；
     * at方式访问越界，抛异常out_of_range
     * */

    try
    {
        //cout<<s1[100]<<endl;  //vs下挂了，gcc下没有崩，只是没有输出
        cout<<s1.at(100)<<endl;
    }
    catch(...)
    {
        cout<<"out of range"<<endl;
    }
}

//拼接操作
void test04()
{
    string s = "abcd";
    string s2 = "1111";
    s+="abcd";
    cout<<s<<endl;
    s+=s2;
    cout<<s<<endl;

    string s3 = "222";
    s2.append(s3);
    cout<<s2<<endl;

    string s4=s2+s3;
    cout<<s4<<endl;
}

// find从前往后找；rfind从后往前找
void test05()
{
    string s = "abcdefghjfgkl";

    //查找第一次出现的位置
    int pos = s.find("fg");
    cout<<pos<<endl; // 5

    //查找最后一次出现的位置
    int pos1 = s.rfind("fg");
    cout<<pos1<<endl;  // 9
}


int main()
{
    //test03();
    //test04();
    test05();
    return 0;
}