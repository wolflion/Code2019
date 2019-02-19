//program 3-3
#include <iostream>
using namespace std;
int Partition(int r[],int low,int high)
{
    int i=low,j=high,pivot = r[low];
    while(i<j)
    {
        while(i<j&&r[j]>pivot)
            j--;
        if(i<j)
        {
            swap(r[i++],r[j]);
        }
        while(i<j&&r[i]<=pivot)
            i++;
        if(i<j)
        {
            swap(r[i],r[j--]);
        }
    }
    return i;
}

void QuickSort(int R[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = Partition(R,low,high);
        QuickSort(R,low,mid-1);
        QuickSort(R,mid+1,high);
    }
}

int main()
{
    int a[1000];
    int i,N;
    cout<<"请先输入要排序的数据的个数：";
    cin>>N;
    cout<<"请输入要排序的数据：";
    for(i=0;i<N;i++)
        cin>>a[i];
    cout<<endl;
    QuickSort(a,0,N-1);
    cout<<"排序后的序列为："<<endl;
    for(i=0;i<N;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
// 9
// 30 24 5 58 18 36 12 42 39
