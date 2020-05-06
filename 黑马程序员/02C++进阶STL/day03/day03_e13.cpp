//
// Created by lionel on 2019/8/23.
//

//13 string替换_比较_子串_插入和删除_rec.

#include <iostream>
#include <string>
using namespace std;

// string替换
void test06()
{
    string s = "abcdefg";
    s.replace(0,2,"111"); // 从0开始，取2个字符，替换成111
    cout<<s<<endl;
}

// string比较
void test07()
{
    string s1 = "abcd";
    string s2 = "abce";

    if(s1.compare(s2) == 0)
    {
        cout<<"字符串相等!"<<endl;
    } else
    {
        cout<<"字符串不相等!"<<endl;
    }
}

// 子串操作
void test08()
{
    string s = "abcdefg";
    string s2 = s.substr(1,3);
    cout<<s2<<endl;//bcd
}

//插入和删除
void test09()
{
    string s = "abcdefg";
    s.insert(3,"11");  // 往后插
    cout<<s<<endl;

    s.erase(0,2);
    cout<<s<<endl;
}

int main()
{
    //test06();
    //test07();
    //test08();
    test09();
    return 0;
}

