//2.2 traits����
//��2.3  ��֪����������CIntArray,����������CFloatArray�������ͻ򸡵�����ĺͳ�����Ӧ���������
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
    int GetSum(int times)  //������
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
    float GetSum(float times)  //��������
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

int main()  //д��void��
{
    CIntArray intary;
    CFloatArray fltary;
    cout<<"���������3���ǣ�"<<intary.GetSum(3)<<endl;
    cout<<"���������3.2���ǣ�"<<fltary.GetSum(3.2f)<<endl;
	system("pause");
    return 0;
}
