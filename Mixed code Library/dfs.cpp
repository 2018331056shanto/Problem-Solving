 #include<bits/stdc++.h>
using namespace std;
int vis[1000];
vector<int>adj[1000];
void dfs(int u,int v)
{
    vis[u]=1;
    if(u==v)
    {
        cout<<"Paisi salare"<<endl;
        return;
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
