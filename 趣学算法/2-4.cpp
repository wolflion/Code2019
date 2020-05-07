// program 2-4
#include <cstdio>
#include <iostream>
#include <cstring>
#include <windows.h>
#include <stack>
using namespace std;
const int N = 100; // ���еĸ������޸�
const int INF = 10000000; // ��ʼ�������Ϊle7
int map[N][N],dist[N],p[N],n,m; // n���еĸ�����mΪ���м�·�ߵ�����
bool flag[N]; // ���flag[i]����true,˵������i�Ѿ����뵽����S�����򶥵�i����V-S

void Dijkstra(int u)
{
    for(int i=1;i<=n;i++)
    {
        dist[i] = map[u][i];  // ��ʼ��Դ��u������������������·������
        flag[i] = false;
        if(dist[i] == INF)
            p[i] = -1; // Դ��u���ö���·������Ϊ�����˵������i��Դ��u������
        else
            p[i] = u;  // ˵������i��Դ��u���ڣ����ö���i��ǰ��p[i]=u
    }
    dist[u]=0;
    flag[u]=true; // ��ʼʱ������S��ֻ��һ��Ԫ�أ�Դ��u
    for(int i=1;i<=n;i++)
    {
        int temp = INF,t = u;
        for(int j=1;j<=n;j++) // �ڼ���V-S��Ѱ�Ҿ���Դ��u����Ķ���t
        {
            if(!flag[j]&&dist[j]<temp)
            {
                t = j;
                temp = dist[j];
            }
            if(t == u)
                return ; // �Ҳ���t������ѭ��
            flag[t]=true;  // ���򣬽�t���뼯��
        }
        for(int j=1;j<=n;j++) // ���¼���V-S����t�ڽӵĶ�����Դ��u�ľ���
        {
            if(!flag[j]&&map[t][j]<INF) // !s[j]��ʾj��V-S��
            {
                if(dist[j]>(dist[t]+map[t][j]))
                    {
                        dist[j]=dist[t]+map[t][j];
                        p[j]=t;
                    }
            }
        }
    }
}

int main()
{
    int u,v,w,st;
    system("color Od");
    cout<<"��������еĸ�����"<<endl;
    cin>>n;
    cout<<"���������֮���·�ߵĸ�����"<<endl;
    cin>>m;
    cout<<"���������֮���·���Լ����룺"<<endl;
    for(int i=1;i<=n;i++)  // ��ʼ��ͼ���ڽӾ���
    {
        for(int j=1;j<=n;j++)
            {
                map[i][j] = INF; // ��ʼ���ڽӾ���Ϊ�����
            }
    }
    while(m--)
    {
        cin>>u>>v>>w;
        map[u][v]=min(map[u][v],w);//�ڽӾ���洢��������С�ľ���
    }
    cout<<"������С�����ڵ�λ�ã�"<<endl;
    cin>>st;
    Dijkstra(st);
    cout<<"С�����ڵ�λ�ã�"<<st<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"С����"<<st<<" - "<<"Ҫȥ��λ�ã�"<<i<<endl;
        if(dist[i] == INF)
            cout<<"sorry,��·�ɴ�"<<endl;
        else
            cout<<"��̾���Ϊ��"<<dist[i]<<endl;
    }
    return 0;
}
