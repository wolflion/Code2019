//
// Created by lionel on 2019/9/11.
//

// deque����������ͷ��βɾ������

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque<int> a;
    a.push_back(2);
    a.push_back(4);
    a.push_back(6);

    //��ǰ���
    a.push_front(1);
    a.push_front(3);
    a.push_front(5);  //�������ǰ���

    for(size_t nCount = 0;nCount<a.size();++nCount)
        cout<<a[nCount]<<endl;   //���531246

    a.pop_front(); // ��ǰ��ɾ��
    a.pop_back(); //�Ӻ���ɾ��

    cout<<"ͷ��β��ɾ��һ��Ԫ�أ�"<<endl;
    for(size_t nCount = 0;nCount<a.size();++nCount)
        cout<<a[nCount]<<endl;  // 3124

    cout<<"�õ�����"<<endl;  // ������û���±꣬��STL����㷨distance()
    //�õ�����
    deque<int>::iterator it;
    for(it=a.begin();it!=a.end();++it)
    {
        size_t nOffset = distance(a.begin(),it);
        cout<<"a["<< nOffset<<"]="<<*it<<endl;
    }

    return 0;
}

