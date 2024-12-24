#include<bits/stdc++.h>
#define sz 1000
using namespace std;
vector<int>adj[sz];
int vis[sz];
int bfs(int source,int dest,int n)
{
    int x,cost;
    queue< pair<int,int> >q;
    q.push({source,0});
    vis[source]=1;
    while(!q.empty())
    {
        x=q.front().first;
        cost=q.front().second;
        q.pop();
        if(x==dest)
            return cost;
        for(int j=0;j<adj[x].size();j++)
        {
            if(!adj[x][j])
            {
                q.push({adj[x][j],cost+1});
                vis[adj[x][j]]=1;
            }
        }
    }
    return -1;
}

int main()
{
    int n,e,s,d,x,y;
    cin>>n>>e>>s>>d;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);


    }
    int ret=bfs(s,d,n);
    if(ret==-1)
        cout<<"unreachable"<<endl;
    else
         cout<<ret<<endl;
    return 0;
}
