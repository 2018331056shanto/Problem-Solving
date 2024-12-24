#include <iostream>
#include <vector>
#include <queue>
#define pb push_back
#define sz 100000
using namespace std;

vector <int> adj[sz];
int vis[sz];

int bfs(int source, int dest, int n)
{
    queue< pair<int,int> >q;
    int x, cost;
    q.push({source,0});
    vis[source] = 1;
    while(!q.empty())
    {
        x = q.front().first;
        cost = q.front().second;
        q.pop();
        if(x==dest) return cost;
        for (int i = 0; i<adj[x].size(); i++)
            if(!vis[ adj[x][i] ])
            {
                q.push({adj[x][i],cost+1});
                vis[ adj[x][i] ] = 1;
            }
    }
    return -1;
}

 
int main()
{
    int n, m, x, y, p, q;
    cin >> n >> m;
    cin >> x >> y;
    for (int i = 0; i<m; i++)
    {
        cin >> p >> q;
        adj[p].pb(q);
        adj[q].pb(p);
    }
    int ret = bfs(x,y,n);
    if(ret==-1) cout << "Destination Unreachable!" << endl;
    else cout << "Min Cost from " << x <<" to "<<y <<" = " << ret <<endl;
    return 0;
}
/**
7 8
5 6
0 1
0 2
0 4
1 2
1 6
2 3
3 6
4 5

*/
