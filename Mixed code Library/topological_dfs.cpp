#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define sz 100000
#define pb push_back
using namespace std;

vector<int> adj[sz];
int  n, time, dis[sz], col[sz], fin[sz];
queue<int>q;

void topo_sort(int x)
{
    dis[x] = ++time;
    col[x] = 1;
    for (int i = 0; i<adj[x].size(); i++)
        if(!col[ adj[x][i] ])
            topo_sort(adj[x][i] );
    col[x] = 2;
    fin[x]= ++time;
    }

int main()
{
    int m, x, y;
    cin >> n >> m;
    for (int i = 0; i<m; i++)
    {
        cin >> x >> y;
        adj[x].pb(y);
    }
    cout << "One possible ordering: ";
    for (int i = 0; i<n; i++)
        if(col[i]!=2) topo_sort(i);
    vector< pair <int, int> > seq;
    for (int i = 0; i<n; i++)
        seq.pb({fin[i],i});
    sort(seq.rbegin(), seq.rend());
    for (int i = 0; i < n; i++)
        cout << seq[i].second <<" \n"[i==n-1] ;
    return 0;
}
/**
13 14
0 1
0 4
8 10
1 3
7 9
4 3
8 7
11 2
10 12
0 5
3 6
5 6
7 12
3 5
*/
