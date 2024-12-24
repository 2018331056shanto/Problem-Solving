#include<bits/stdc++.h>
using namespace std;
int vis[1000];
vector<int>adj[1000];
int bfs(int u,int v)
{
    vis[u]=1;
    int cost;
    queue< pair<int,int> >s;
    s.push({u,0});
    while(!s.empty())
    {
        int x=s.front().first;
        cost=s.front().second;
        s.pop();
        if(x==v)
        {
            return cost;
        }

        for(int i=0;i<adj[x].size();i++)
        {
            if(!vis[adj[x][i]])
            {
                s.push({adj[x][i],cost+1});
                vis[adj[x][i]]=1;

            }
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
    int cost=bfs(u,v);
 cout<<cost<<endl;
}
