//program 2-1
#include <iostream>
#include <algorithm>
const int N = 1000005;
using namespace std;
double w[N]; // �Ŷ�����������
int main()
{
    double c;
    int n;
    cout<<"������������c���Ŷ�����n: "<<endl;
    cin>>c>>n;
    cout<<"������ÿ���Ŷ����������ÿո�ֿ���"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>w[i]; // ����ÿ����Ʒ����
    }
    sort(w,w+n);//���Ŷ�������������
    double tmp=0.0; // tmpΪ��װ�ص����ϵĹŶ�����
    int ans = 0; // ansΪ��װ�صĹŶ�����
    for(int i=0;i<n;i++)
    {
        tmp+=w[i];
        if(tmp<=c)
            ans++;
        else
            break;
    }
    cout<<"��װ��ĹŶ��������ΪAns=";
    cout<<ans<<endl;
    return 0;
}

// 30 8
// 4 10 7 11 3 5 14 2
// ���Ans=5
