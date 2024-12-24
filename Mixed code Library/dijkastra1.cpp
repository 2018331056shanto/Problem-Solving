#include<bits/stdc++.h>
using namespace std;
#define inf (1<<28)
int cost[10000];
vector<int>adj[10000],weight[10000];
priority_queue< pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > >s;
void dij(int n)
{
    for(int i=0;i<n;i++)
    {
        cost[i]=inf;
    }

}
int dijkastra(int u,int v)
{
    cost[u]=0;
    s.push({0,u});
    while(!s.empty())
    {
        int x,y;
        x=s.top().first;
        y=s.top().second;
        s.pop();
        for(int i=0;i<adj[y].size();i++)
        {
            if(cost[y]+weight[y][i]<cost[adj[u][i]])
            {
                cost[adj[y][i]]=cost[y]+weight[y][i];
                s.push({cost[adj[y][i]],adj[y][i]});
            }
        }
    }
    return cost[v];
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y,c;
        cin>>x>>y>>c;
        adj[x].push_back(y);
        adj[y].push_back(x);
        weight[x].push_back(c);
        weight[y].push_back(c);


    }
    dij(n);
    int u,v;
    cin>>u>>v;
    int co=dijkastra(u,v);
    cout<<co<<endl;
}
