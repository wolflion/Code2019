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
    char pszName[20] = "�ŷ�"; //�ַ�����,C������ַ���  ��C���Է����ַ�����
    char *pszName2 = "�ŷ�"; //�ַ�ָ��,C������ַ���

    string strName("�ŷ�");  // ���ù��캯����string��STL��ģ�
    cout<<pszName<<endl;
    cout<<pszName2<<endl;  // ��lionel��������ѻ���ǰ��д*��
    cout<<strName<<endl;

    string strName2 = "����";  // ��ֵ���������ơ�
    cout<<strName2<<endl;

    const char* pszConstString = "Hello String!";
    std::string strFromConst(pszConstString); // ��C�����Ϊ����
    cout<<strFromConst<<endl;

    std::string str2("Hello String!");
    std::string str2Copy(str2);  // ����
    cout<<str2Copy<<endl;

    //�����ַ�����һ����
    std::string strPartialCopy(pszConstString,5); // ǰ5��
    cout<<strPartialCopy<<endl;  //���ǰ5��

    // ��ʼ��10��'a'
    std::string strRepeatChars(10,'a');
    cout<<strRepeatChars<<endl;

    //c������ĸ���
    const char* pszConstStr = "Hello C!";
    char *pszCopy = new char[strlen(pszConstStr)+1];  // ��lionel,����new char�õ���(),������[]��
    //char *pszCopy = new char [100];
    strcpy(pszCopy,pszConstStr);  // strcpy()��strlen()����cstring��
    cout<<pszCopy<<endl;
    delete[] pszCopy;
}

void test02()
{
    string strSTLString("Hello String");
    cout<<"ʹ�ô�ͳ�ķ�����ʾ�ַ����е�ÿһ���ַ���";
    for(size_t nCharCounter = 0;
    nCharCounter< strSTLString.length();
    ++nCharCounter)
    {
        //������һ�����ÿ���ַ�
        cout<<strSTLString[nCharCounter]<<endl;
    }

    cout<<"ʹ��STL��ĵ����������ַ����ĵ�һ���ַ���";
    // string::const terator itr;  // �����const�ǲ��Եİɡ�
    string::const_iterator itr;  // �����������������const�ġ�
    for(itr = strSTLString.begin();itr!=strSTLString.end();++itr)
    {
        cout<<*itr<<endl;
    }
    cout<<strSTLString.c_str()<<endl; // ��lionel��C�����ַ�����

}

// �ַ�������
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

// �ַ�������
void test04()
{
    string strSample("Good day String! Today");
    cout<<strSample<<endl;

    // �ҵ��Ľ���Ǹ�λ�� ���ҵ���1����ͣ�����ˡ�
    size_t nOffset = strSample.find("day",0); // ����ָ������λ�ã������0��ʼ��
    if(nOffset!=string::npos)
    {
        cout<<"���±꣺"<<nOffset<<"�ҵ���!"<<endl;  //�±�5�ҵ�
    }
    else
    {
        cout<<"û�ҵ�"<<endl;
    }

    // �ҵ��ַ��������е�"day"
    size_t nSubOffset = strSample.find("day",0);
    while (nSubOffset != string::npos)
    {
        cout<<"���±꣺"<<nSubOffset<<"�ҵ�day"<<endl;
        //�µĲ���λ�ã����ǵ�1���ҵ���λ��
        size_t nSearchOffset = nSubOffset+1;
        nSubOffset = strSample.find("day",nSearchOffset);
    }

    cout<<"\n\n�������е�a:"<<endl;
    size_t nCharacterOffset = strSample.find('a',0);
    while (nCharacterOffset != string::npos)
    {
        cout<<"���±꣺"<<nCharacterOffset<<"�ҵ��ַ�a"<<endl;
        size_t nCharOffset = nCharacterOffset+1;
        nCharacterOffset = strSample.find('a',nCharOffset);
    }
}

// �ַ����ض�
void test05()
{
    string strSample("Hello String! Wake up to a beautiful day");
    cout<<strSample<<endl;

    strSample.erase(13,28);  //13-28�Ķ���Ҫ��
    cout<<strSample<<endl;

    //find�㷨��������  ���������㷨�ˣ�Ҫ����algorithmͷ�ļ���
    string::iterator iChars = find(strSample.begin(),strSample.end(),'S');
    if(iChars != strSample.end())
        strSample.erase(iChars);  //���ҵ���Sɾ��

    cout<<strSample<<endl;   // Hello tring!

    strSample.erase(strSample.begin(),strSample.end());
    if(strSample.length() == 0)
        cout<<"The string is empty"<<endl;
}

void test06()
{
    string strSample("Hello String! We Will reverse you!");
    cout<<strSample<<endl;

    //��ת����ָ������ �ַ���
    reverse(strSample.begin(),strSample.end());
    cout<<strSample<<endl;
}

void test07()
{
    cout<<"������һ���ַ�����"<<endl;
    string strInput;
    getline(cin,strInput);  // ��getline�������һ������ء�
    transform(strInput.begin(),strInput.end(),strInput.begin(),::toupper);   // ���������ȷʵû�ù���lionel��
    cout<<strInput<<endl;
    transform(strInput.begin(),strInput.end(),strInput.begin(),::tolower);  // ��������û�м��������÷�����ֻд��tolower��������::tolower��
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