#include <iostream>
#include <typeinfo>
using namespace std;

class White{};
class Black{};

int e431main()
{
    White a;
    Black b;

    cout<<typeid(a).name()<<endl;   // 5White
    cout<<typeid(b).name()<<endl;   // 5Black

    White c;

    bool a_b_sametype = (typeid(a).hash_code() == typeid(b).hash_code());
    bool a_c_sametype = (typeid(a).hash_code() == typeid(c).hash_code());

    cout<<"Same type? "<<endl;
    cout<<"A and B? "<<(int)a_b_sametype<<endl;
    cout<<"A and C? "<<(int)a_c_sametype<<endl;

    //g++ -std=c++11 4-3-1.cpp
}
