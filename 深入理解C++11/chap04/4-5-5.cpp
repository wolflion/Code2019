#include <vector>
#include <iostream>
using namespace std;

int e455main()
{
    vector<int> v = {1,2,3,4,5};
    for(auto i=v.beign();i != v.end();++i)
        cout<<*i<<endl;  // i是迭代器

    for(auto e:v)
        cout<<e<<endl;  //e是解引用后的对象

    // g++ -std=c++11 4-5-5.cpp
}
