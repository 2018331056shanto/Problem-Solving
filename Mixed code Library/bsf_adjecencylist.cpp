#include<bits/stdc++.h>
#define pb push_back
#define sz 10000
using namespace std;
vector<int>adj[sz];
int vis[sz];
int bfs(int source,int dest,int n)
{

    queue< pair<int,int> >q;
    q.push({source,0});
    vis[source]=1;
    while(!q.empty())
    {

        int x,cost;
        x=q.front().first;
        cost=q.front().second;
        q.pop();
        if(x==dest)
            return cost;
        for(int j=0;j<adj[x].size();j++)
        {

            if(!vis[adj[x][j]])
            {
              q.push({adj[x][j],cost+1});
              vis[adj[x][j]];
            }
        }
    }
    return -1;
}
int main()

{

    int n,m,x,y,p,q;
    cin>>n>>m;
    cin>>x>>y;
    for(int i=0;i<m;i++)
    {

        cin>>p>>q;
        adj[p].pb(q);
        adj[q].pb(p);

    }
    int ret=bfs(x,y,n);
    if(ret==-1)
        cout<<"can't rechable"<<endl;
    else
        cout<<"minimum cost form:  "<<x<<"  to  "<<y<<"  is  "<<ret;
}
