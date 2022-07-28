#include<bits/stdc++.h>
using namespace std;
#define sz 10000
int vis[sz];
vector<int>adj[sz];
void dfs(int u,int v)
{
    vis[u]=1;
    if(u==v)
    {
        cout<<"FUCK YOU BITCH"<<endl;
        return ;
    }
    for(int i=0;i<adj[u].size();i++)
    {
        if(!vis[adj[u][i]])
        {
            dfs(adj[u][i],v);
        }

    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int u,v;
    cin>>u>>v;
    dfs(u,v);
}
