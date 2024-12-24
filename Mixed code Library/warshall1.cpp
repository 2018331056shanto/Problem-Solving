#include<bits/stdc++.h>
using namespace std;
#define sz 10000
int adj[sz][sz];
void init(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
                adj[i][j]=INT_MAX/4;
        }
    }
}
void warshall(int n)
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    init(n);
    for(int i=0;i<e;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        adj[x][y]=z;
        adj[y][x]=z;

    }

    warshall(n);
    for(int k=0;k<n;k++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj[k][j]<<"\t\n"[j==n-1];
        }
    }
}
