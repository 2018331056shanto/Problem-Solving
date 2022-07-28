
#include <iostream>
#include <vector>
#define sz 100000
#define pb push_back
using namespace std;

vector<int> adj[sz];
vector< pair<int,int> > arti_bridge;

bool visited[sz];
int d[sz], low[sz], time=0;

void findArticulationBridge(int u, int par)
{
    low[u] = d[u] = ++time;
    visited[u] = true;
    int child = 0;
    for (int i = 0; i<adj[u].size(); i++ )
    {
        if(adj[u][i]==par)
            continue;
        if(visited[ adj[u][i] ])
            low[u] = min(low[u], d[ adj[u][i] ]);
        else
        {
            findArticulationBridge(adj[u][i],u);
            low[u] = min(low[u],low[ adj[u][i] ]);
            if(d[u] < low[ adj[u][i] ] && par!=-1)
                arti_bridge.pb({u,adj[u][i]});
            child++;
        }

        if(child>1 and par==-1)
            cerr << "What should I do?\n";
    }
}
int main()
{
    /// SOME WORK STILL TO BE DONE!
    int n, m, x, y;
    cin >> n >> m;

    for (int i = 0; i<m; i++)
    {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    findArticulationBridge(0,-1);
    cout <<"Node\td[i]\tlow[i]\n";
    for (int i = 0; i<n; i++)
        cout << i << "\t" << d[i] << "\t" << low[i] << "\n";
    cout <<"Arti Bridge # " << arti_bridge.size()<<endl;
//    return 0;
    cout << "Articulation Bridge List:\n";
    for (pair<int,int> i: arti_bridge)
            cout << i.first << " " << i.second << "\n";

    return 0;
}
/**
12 14
0 1
0 2
1 2
2 3
3 4
6 3
4 5
6 5
7 6
10 11
11 9
9 10
9 8
7 8

12 15
0 1
0 2
1 2
2 3
3 4
6 3
4 5
6 5
7 6
10 11
11 9
9 10
9 8
7 8
10 4

7 7
0 1
0 2
0 3
1 2
3 6
2 4
5 4
*/
