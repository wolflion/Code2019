//06 map补充_rec

#include<iostream>
#include<map>
using namespace std;

class MyKey
{
public:
    MyKey(int index, int id)
    {
        this->mIndex = index;
        this->mID = id;
    }
public:
    int mIndex;
    int mID;
};

struct mycompare{
    bool operator()(MyKey& key1,MyKey& key2)
    {
        return key1.mIndex > key2.mIndex;
    }
};
#if 0
void test02()
{
    map<MyKey,int,mycompare>myMap; // 自动排序，自定义数据类型 怎么排？

    myMap.insert(make_pair(MyKey(1,2),10));
    myMap.insert(make_pair(MyKey(4,5),20));


    for(map<MyKey,int,mycompare>::iterator it=myMap.begin(); it!=myMap.end();it++)
    {
        cout<<it->first.mIndex<<","<<it->fisrt.mID<<it->second<<endl;
    }
}
#endif

// equal_range
void test03()
{
    map<int,int>myMapint;
    myMapint.insert(make_pair(1,4));
    myMapint.insert(make_pair(2,5));
    myMapint.insert(make_pair(3,6));

    pair<map<int,int>::iterator> ret = myMapint.equal_range(2);
    if(ret.first->second)
    {
        cout<<"found it "<<endl;
    }
    else
        cout<<"not found"<<endl;

    if(ret.second->second)
    {
        cout<<"found it "<<endl;
    }
    else
        cout<<"not found"<<endl;
}


int main()
{
    test02();
    test03();
    return 0;
}
