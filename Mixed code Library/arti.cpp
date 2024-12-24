/*
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int vis[10000];
vector<int>adj[10000];
void dfs(int u,int v)
{
    vis[u]=1;
    if(u==v)
    {
        cout<<"GOT YOU"<<endl;
        return ;
    }
for(int j=0;j<adj[u].size();j++)
{
    if(!vis[adj[u][j]])
    {
        dfs(adj[u][j],v);

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
        adj[x].pb(y);
        adj[y].pb(x);

    }
    int u,v;
    cin>>u>>v;
    dfs(u,v);

}
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define sz 10000
#define pb push_back
int vis[sz];
vector<int>adj[sz];
int bfs(int u,int v)
{
    vis[u]=1;
    queue< pair<int,int> > s;
    s.push({u,0});
    while(!s.empty())
    {
        int x,cost;
        x=s.front().first;
        cost=s.front().second;
        s.pop();
        if(x==v)
            return cost;
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
        adj[x].pb(y);
        adj[y].pb(x);
    }
    int u,v;
    cin>>u>>v;
    int cost=bfs(u,v);
    cout<<cost<<endl;
}
*/
#include<bits/stdc++.h>
using namespace std;
#define sz 10000
#define pb push_back
#define inf (1<<28)
int cost[sz];
vector<int>adj[sz],weight[sz];
priority_queue< pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > >s;
void dis(int n)
{
    for(int i=0;i<n;i++)
    {
        cost[i]=inf;
    }
}
int dijkastra(int u,int v)
{
    s.push({0,u});
    cost[u]=0;
    while(!s.empty())
    {
        int x,y;
        y=s.top().first;
        x=s.top().second;
        s.pop();
        for(int j=0;j<adj[x].size();j++)
        {
            if(cost[x]+weight[x][j]<cost[adj[x][j]])
            {
                cost[adj[x][j]]=cost[x]+weight[x][j];
                s.push({cost[adj[x][j]],adj[x][j]});
            }
        }
    }
    return cost[v];
}
int main()
{
    int n,e;
    cin>>n>>e;
    dis( n);
    for(int i=0;i<e;i++)
    {
        int x,y,c;
        cin>>x>>y>>c;
        adj[x].pb(y);
        adj[y].pb(x);
        weight[x].pb(c);
        weight[y].pb(c);
    }
    int u,v;
    cin>>u>>v;
    int co=dijkastra(u,v);
    cout<<co<<endl;

}
