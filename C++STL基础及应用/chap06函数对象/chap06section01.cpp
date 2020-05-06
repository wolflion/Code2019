//STL��ͨ���������е�operator����ʵ�ֺ��������ܵ�

// 6.1 ���

// 6.1.1 Ϊ�����뺯������
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int sum = 0;
void f(int n)
{
    sum += n;
}

#if 0
int main()  //ԭ���õ���void
{
    vector<int>v;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }

    for_each(v.begin(),v.end(),f);
    cout<<sum<<endl;
    system("pause");
    return 0;
}
#endif

void test01()
{
    vector<int>v;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }

    for_each(v.begin(),v.end(),f);
    cout<<sum<<endl;
}


// 6.1.2 �����������
// ��������������operator()�����һ��ʵ����operator()��������Ϊ0��1��2�����Ի��֣���������һԪ��������Ԫ������

// 6.1.3 ��ʾ��
// e6_1.cpp����6.1 ������������Ԫ��֮��
class CSum
{
public:
    CSum(){sum = 0;}
    void operator()(int n)
    {
        sum += n;
    }
    int GetSum() {return sum;}
private:
    int sum;
};

void test02()
{
    vector<int>v;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }
    CSum sObj = for_each(v.begin(),v.end(),CSum());  // ������ض����Ǹ������
    cout<<sObj.GetSum()<<endl;
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
