//
// Created by lionel on 2019/8/24.
//

// 16 vector��ȡ_����ɾ��_��С����_rec.

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v)
{
    for(vector<int>::iterator it = v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test03()
{
    int arr1[] = {100, 200, 300, 400};
    vector<int> v4(arr1, arr1 + sizeof(arr1) / sizeof(int));

    cout<<"size="<<v4.size()<<endl;
    if(v4.empty())
    {
        cout<<"v4.empty()"<<endl;
    } else
    {
        cout<<"v4.empty(),����"<<endl;  //��������֧
    }

    printVector(v4);
    v4.resize(2);  // ���ݱ��2����������ݾ��ӵ���
    printVector(v4);
    v4.resize(6); //�����Ĭ��ֵ  v4.resize(6,1��Ĭ��ֵ��1
    printVector(v4);

    for(int i=0;i<1000;i++)
    {
        v4.push_back(i);
    }

    cout<<"size:"<<v4.size()<<endl;  // �����1006
    cout<<v4.capacity()<<endl;  // ������ size()��Ԫ�صĸ���  ������1536
}

//vector��ȡ����
void test04()
{
    int arr1[] = {100, 200, 300, 400};
    vector<int> v4(arr1, arr1 + sizeof(arr1) / sizeof(int));

    for(int i=0;i<v4.size();i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v4.size();i++)
    {
        cout<<v4.at(i)<<" ";
    }
    cout<<endl;

    //����at()���쳣��[]�����쳣

    cout<<"front: "<<v4.front()<<endl;  //���ص�1��Ԫ��
    cout<<"back: "<<v4.back()<<endl;  //�������1��Ԫ��
}

//������ɾ��
void test05()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    //ͷ�巨
    v.insert(v.begin(),30); //30,10,20 ��1��Ԫ�������� ������
    //β�巨
    v.insert(v.end(),40); //30,10,20,40

    //���м��   ��֧��[]���ʵģ���֧��������ʡ�
    v.insert(v.begin()+2,100); // ��vector֧��������ʣ����Կ��Լ�2����Ȼֻ�ܼ�1��
    printVector(v);

    //һ������£���֧��[]���ʵģ���֧��������ʡ�
    // ������ ����ֱ�� +2��-3����

    //ɾ��
    v.erase(v.begin());
    printVector(v);
    v.erase(v.begin()+1,v.end());
    printVector(v);
    v.clear();
    cout<<"size:"<<v.size()<<endl;
}

int main()
{
    //test03();
    //test04();
    test05();
    return 0;
}
