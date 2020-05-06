//03 map容器基本操作_四种插入方式比较_rec.

#include<iostream>
#include<map>
#include<vector>
using namespace std;

//map容器的初始化
void test01()
{
    // map容器模板参数，第一个参数key的类型，第二参数是value类型
    map<int,int>myMap;

    // 插入数据  pair.first【key值】 pair.second 【value值】
    // 可以判断插入的状态
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

    // 第2种
    myMap.insert(make_pair(20,20));

    // 第3种
    myMap.insert(map<int,int>::value_type(30,30));

    // 第4种
    myMap[40]=40;
    myMap[10]=20;  // 如果key不存在就创建pair，如果key存在，就更新key对应的value
    myMap[50]=50;

    // 这种[]方式，去访问不存在key，会插入到map中，并给个默认值
    cout<<myMap[60]<<endl;

    // 打印
    for(map<int,int>::iterator it = myMap.begin();it!=myMap.end();it++)
    {
        //*it取出来的是一个pair
        //cout<<(*it)<<endl;
        cout<<it->first<<","<<(*it).second<<endl;
    }



}


int main()
{
    test01();
    return 0;
}
