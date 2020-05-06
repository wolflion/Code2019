//2.2 traits技术
//例2.3  已知整型数组类CIntArray,浮点数组类CFloatArray，求整型或浮点数组的和乘以相应倍数并输出
#include<iostream>
using namespace std;
class CIntArray
{
public:
    CIntArray()
    {
        for(int i=0;i<10;i++)
        {
            a[i] = i+1;
        }
    }
    int GetSum(int times)  //整数倍
    {
        int sum = 0;
        for(int i=0;i<10;i++)
        {
            sum+=a[i];
        }
        return sum*times;
    }
private:
    int a[10];
};

class CFloatArray
{
public:
    CFloatArray()
    {
        for(int i=1;i<=10;i++)
        {
            f[i-1] = 1.0f/i;
        }
    }
    float GetSum(float times)  //浮点数倍
    {
        float sum = 0.0f;
        for(int i=0;i<10;i++)
        {
            sum+=f[i];
        }
        return sum*times;
    }
private:
    float f[10];
};

int main()  //写在void了
{
    CIntArray intary;
    CFloatArray fltary;
    cout<<"整型数组和3倍是："<<intary.GetSum(3)<<endl;
    cout<<"浮点数组和3.2倍是："<<fltary.GetSum(3.2f)<<endl;
	system("pause");
    return 0;
}
