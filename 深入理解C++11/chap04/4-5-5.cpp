#include <vector>
#include <iostream>
using namespace std;

int e455main()
{
    vector<int> v = {1,2,3,4,5};
    for(auto i=v.beign();i != v.end();++i)
        cout<<*i<<endl;  // i�ǵ�����

    for(auto e:v)
        cout<<e<<endl;  //e�ǽ����ú�Ķ���

    // g++ -std=c++11 4-5-5.cpp
}
