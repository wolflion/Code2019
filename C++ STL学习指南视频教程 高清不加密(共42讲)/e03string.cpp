//
// Created by lionel on 2019/9/9.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

void test01()
{
    char pszName[20] = "张飞"; //字符数组,C里面的字符串  【C语言风格的字符串】
    char *pszName2 = "张飞"; //字符指针,C里面的字符串

    string strName("张飞");  // 调用构造函数，string是STL里的？
    cout<<pszName<<endl;
    cout<<pszName2<<endl;  // 【lionel，差点自已还想前面写*】
    cout<<strName<<endl;

    string strName2 = "刘备";  // 赋值操作【复制】
    cout<<strName2<<endl;

    const char* pszConstString = "Hello String!";
    std::string strFromConst(pszConstString); // 把C风格作为参数
    cout<<strFromConst<<endl;

    std::string str2("Hello String!");
    std::string str2Copy(str2);  // 复制
    cout<<str2Copy<<endl;

    //复制字符串的一部分
    std::string strPartialCopy(pszConstString,5); // 前5个
    cout<<strPartialCopy<<endl;  //输出前5个

    // 初始化10个'a'
    std::string strRepeatChars(10,'a');
    cout<<strRepeatChars<<endl;

    //c语言里的复制
    const char* pszConstStr = "Hello C!";
    char *pszCopy = new char[strlen(pszConstStr)+1];  // 【lionel,这里new char用的是(),而不是[]】
    //char *pszCopy = new char [100];
    strcpy(pszCopy,pszConstStr);  // strcpy()和strlen()都是cstring的
    cout<<pszCopy<<endl;
    delete[] pszCopy;
}

void test02()
{
    string strSTLString("Hello String");
    cout<<"使用传统的方法显示字符串中的每一个字符：";
    for(size_t nCharCounter = 0;
    nCharCounter< strSTLString.length();
    ++nCharCounter)
    {
        //像数组一样输出每个字符
        cout<<strSTLString[nCharCounter]<<endl;
    }

    cout<<"使用STL里的迭代器操作字符串的第一个字符：";
    // string::const terator itr;  // 【这个const是不对的吧】
    string::const_iterator itr;  // 【迭代器本身就是有const的】
    for(itr = strSTLString.begin();itr!=strSTLString.end();++itr)
    {
        cout<<*itr<<endl;
    }
    cout<<strSTLString.c_str()<<endl; // 【lionel，C风格的字符串】

}

// 字符串连接
void test03()
{
    string strSample1("Hello");
    string strSample2(" String!");
    strSample1 += strSample2;
    cout<<strSample1<<endl;

    string strSample3(" Append");
    strSample1.append(strSample3);
    cout<<strSample1<<endl;

    const char* pszConstString = " C-Style String";
    strSample1.append(pszConstString);
    cout<<strSample1<<endl;
}

// 字符串查找
void test04()
{
    string strSample("Good day String! Today");
    cout<<strSample<<endl;

    // 找到的结果是个位置 【找到第1个就停下来了】
    size_t nOffset = strSample.find("day",0); // 可以指定查找位置，这里从0开始找
    if(nOffset!=string::npos)
    {
        cout<<"在下标："<<nOffset<<"找到了!"<<endl;  //下标5找到
    }
    else
    {
        cout<<"没找到"<<endl;
    }

    // 找到字符串里所有的"day"
    size_t nSubOffset = strSample.find("day",0);
    while (nSubOffset != string::npos)
    {
        cout<<"在下标："<<nSubOffset<<"找到day"<<endl;
        //新的查找位置，就是第1次找到的位置
        size_t nSearchOffset = nSubOffset+1;
        nSubOffset = strSample.find("day",nSearchOffset);
    }

    cout<<"\n\n查找所有的a:"<<endl;
    size_t nCharacterOffset = strSample.find('a',0);
    while (nCharacterOffset != string::npos)
    {
        cout<<"在下标："<<nCharacterOffset<<"找到字符a"<<endl;
        size_t nCharOffset = nCharacterOffset+1;
        nCharacterOffset = strSample.find('a',nCharOffset);
    }
}

// 字符串截短
void test05()
{
    string strSample("Hello String! Wake up to a beautiful day");
    cout<<strSample<<endl;

    strSample.erase(13,28);  //13-28的都不要了
    cout<<strSample<<endl;

    //find算法，迭代器  【这里是算法了，要包含algorithm头文件】
    string::iterator iChars = find(strSample.begin(),strSample.end(),'S');
    if(iChars != strSample.end())
        strSample.erase(iChars);  //把找到的S删除

    cout<<strSample<<endl;   // Hello tring!

    strSample.erase(strSample.begin(),strSample.end());
    if(strSample.length() == 0)
        cout<<"The string is empty"<<endl;
}

void test06()
{
    string strSample("Hello String! We Will reverse you!");
    cout<<strSample<<endl;

    //反转可以指定部分 字符串
    reverse(strSample.begin(),strSample.end());
    cout<<strSample<<endl;
}

void test07()
{
    cout<<"请输入一行字符串："<<endl;
    string strInput;
    getline(cin,strInput);  // 【getline函数，我还不会呢】
    transform(strInput.begin(),strInput.end(),strInput.begin(),::toupper);   // 【这个函数确实没用过，lionel】
    cout<<strInput<<endl;
    transform(strInput.begin(),strInput.end(),strInput.begin(),::tolower);  // 【例子里没有加域名作用符啊，只写了tolower，而不是::tolower】
    cout<<strInput<<endl;
}


int main()
{

    test07();

    //test06();

    //test01();

    //test02();

    //test03();

    //test04();

    //test05();

    return 0;
}