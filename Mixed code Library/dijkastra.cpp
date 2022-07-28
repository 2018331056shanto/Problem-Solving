#include<iostream>
#include<queue>
#define sz 100000
#define pb push_back
#define inf (1<<28)
using namespace std;

int cost[sz];

vector<int> adj[sz], weight[sz];

priority_queue< pair<int,int>, vector <pair<int,int>  >, greater< pair<int,int> > >q; /// node, cost

int dijkstra(int source, int destination)
{
    q.push({0,source});
    cost[source] = 0;
    int x, y;
    while(!q.empty())
    {
        y = q.top().first;
        x = q.top().second;
        q.pop();
        for (int i = 0; i<adj[x].size(); i++)
            if(cost[x] + weight[x][i] < cost[ adj[x][i] ])
            {
                cost[ adj[x][i] ] = cost[x] + weight[x][i];
                q.push({ cost[ adj[x][i] ] ,adj[x][i]});
            }
    }
    return cost[destination];
}

void dijkstra_init(int n)
{
    for (int i = 0; i<n; i++)
        cost[i] = inf;
}

int main()
{
    int n, m, x, y, c;
    cin >> n >> m;
    for (int i = 0; i<m; i++)
    {
        cin >> x >> y >> c;
        adj[x].pb(y);
        adj[y].pb(x);
        weight[x].pb(c);
        weight[y].pb(c);
    }
    dijkstra_init(n);
    cin >> x >> y;

    c = dijkstra(x,y);

    cout << "Minimum cost for going " << x << " to " << y << " is " << c <<"\n";

    return 0;
}
/**
6 9
0 4 100
0 1 25
0 5 7
1 4 2
1 5 7
2 1 2
2 5 8
2 3 1
3 5 3
0 4
*/
