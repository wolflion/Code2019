//07 ����ģ�尸��_char��int������������_rec.

#include<iostream>
using namespace std;

void PrintArray(int *arr, int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
}

template<typename T>     //����дtemplate��������,û�д�����ʾ,��������
void PrintArray(T *arr, int len)
{
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
}


void MySort(int *arr, int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            //�Ӵ�С��
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
template<typename T>
void MySort(T *arr, int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            //�Ӵ�С��
            if(arr[i]<arr[j])
            {
                T temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}

int main()
{
    int Arr[] = {2,6,1,8,92};
    int len = sizeof(Arr)/sizeof(int);  //���鳤�� �ۻ���sizeof(Arr[0])��


    char cArr[] = {'a','c','b','p','t'};
    int cLen = sizeof(cArr)/sizeof(char);

    PrintArray(Arr,len);
    cout<<endl;
    cout<<"sort after"<<endl;
    MySort(Arr,len);
    PrintArray(Arr,len);
    cout<<endl;

    cout<<"char"<<endl;
    PrintArray(cArr,len);
    cout<<endl;
    cout<<"sort after"<<endl;
    MySort(cArr,len);
    PrintArray(cArr,len);

    return 0;

}
