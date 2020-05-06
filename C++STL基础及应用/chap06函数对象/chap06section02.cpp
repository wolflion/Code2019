/*6.2 һԪ����
template <class _A, class _R>
struct unary_function
{
    typedef _A argument_type;
    typedef _B result_type;
};
*/

// ��6.2 e6_2.cpp ����һԪ������������Ԫ��֮��
#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

template<class _inPara, class _outPara>
class CSum : public unary_function<class _inPara, class _outPara>
{
public:
    _outPara sum;
    CSum(){sum = 0;}
    void operator()(_inPara n)
    {
        sum += n;
    }
    _outPara GetSum() {return sum;}
};

int main()
{
    vector<int> v;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }
    CSum<int,int>sObj = for_each(v.begin(), v.end(), CSum<int,int>());
    cout<<"sum(int)="<<sObj.GetSum()<<endl;

    vector<float> v2;
    float f = 1.3f;
    for(int i=1;i<=99;i++)
    {
        v2.push_back(i);
        f+=1.0f;
    }
    CSum<float,float>sObj = for_each(v2.begin(), v2.end(), CSum<float,float>());
    cout<<"sum(float)="<<sObj.GetSum()<<endl;
}
