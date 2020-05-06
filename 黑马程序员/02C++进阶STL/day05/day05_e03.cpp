//03 map������������_���ֲ��뷽ʽ�Ƚ�_rec.

#include<iostream>
#include<map>
#include<vector>
using namespace std;

//map�����ĳ�ʼ��
void test01()
{
    // map����ģ���������һ������key�����ͣ��ڶ�������value����
    map<int,int>myMap;

    // ��������  pair.first��keyֵ�� pair.second ��valueֵ��
    // �����жϲ����״̬
    pair<map<int,int>::iterator,bool> ret = myMap.insert(pair<int,int>(10,10));
    if(ret.second)
    {
        cout<<"success"<<endl;
    }
    else
        cout<<"failure"<<endl;

    ret = myMap.insert(pair<int,int>(10,20));
    if(ret.second)
    {
        cout<<"(10,20)success"<<endl;
    }
    else
        cout<<"(10,20)failure"<<endl;

    // ��2��
    myMap.insert(make_pair(20,20));

    // ��3��
    myMap.insert(map<int,int>::value_type(30,30));

    // ��4��
    myMap[40]=40;
    myMap[10]=20;  // ���key�����ھʹ���pair�����key���ڣ��͸���key��Ӧ��value
    myMap[50]=50;

    // ����[]��ʽ��ȥ���ʲ�����key������뵽map�У�������Ĭ��ֵ
    cout<<myMap[60]<<endl;

    // ��ӡ
    for(map<int,int>::iterator it = myMap.begin();it!=myMap.end();it++)
    {
        //*itȡ��������һ��pair
        //cout<<(*it)<<endl;
        cout<<it->first<<","<<(*it).second<<endl;
    }



}


int main()
{
    test01();
    return 0;
}
