//program  3-1.cpp
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespce std;
const int M=10000;
int x,n,i;
int s[M];
int BinarySearch(int n, int s[], int x)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int middle = (low+high)/2;
        if(x == s[middle])
            return middle;
        else if(x < s[middle])
            high = middle-1;
        else
            low = middle+1;
    }
    return -1;
}

int main()
{
    cout << "�����������е�Ԫ�ظ���nΪ��";
    while(cin >> n)
    {
        cout << "���������������е�Ԫ�أ�";
        for(i=0;i<n;i++)
            cin>>s[i];
        sort(s,s+n);
        cout<<"����������Ϊ��";
        for(i=0;i<n;i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;
        cout<<"������Ҫ���ҵ�Ԫ�أ�";
        cin >> x;
        i = BinarySearch(n,s,x);
        if(i==-1)
            cout<<"��������û��Ҫ���ҵ�Ԫ��"<<endl;
        else
            cout<<"Ҫ���ҵ�Ԫ���ڵ�"<<i+1<<"λ"<<endl;
    }
    return 0;
}

//11
// 60 17 39 15 8 34 30 45 5 52 35
// ��17���Ԫ��
