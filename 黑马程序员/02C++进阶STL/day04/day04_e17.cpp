//
// Created by lionel on 2019/8/19.
//

//17 pair对组_rec

#include <iostream>
#include <string>
using namespace std;

void test01()
{
    //创建
    pair<int,int> pair1(10,20);
    cout<<pair1.first<<endl;
    cout<<pair1.second<<endl;

    // 创建2
    pair<string,int> pair2 = make_pair("test",10);
    cout<<pair2.first<<endl;
    cout<<pair2.second<<endl;

    // 创建3
    pair<string,int> pair3 = pair2;
    cout<<pair3.first<<endl;
    cout<<pair3.second<<endl;

}

int main()
{
    test01();
    return 0;
}