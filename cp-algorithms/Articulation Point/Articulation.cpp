#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
std::vector<bool> visited;
vector<int>discoveryTime,lowerTimeByOneBackEdge;
int timer;
vector<pair<int,int>>bridges;

void dfs(int child,int parent=-1)
{
	visited[child]=true;

	discoveryTime[child]=lowerTimeByOneBackEdge[child]=timer++;

	bool parent_skip=false;

	for(int nextChild:adj[child])
	{
		if(nextChild==parent&&!parent_skip)
		{
			parent_skip=true;
			continue;
		}
		if(visited[nextChild])
		{
			lowerTimeByOneBackEdge[child]=min(lowerTimeByOneBackEdge[child],discoveryTime[nextChild]);
		}
		else
		{
			dfs(nextChild,child);
			lowerTimeByOneBackEdge[child]=min(lowerTimeByOneBackEdge[child],lowerTimeByOneBackEdge[nextChild]);
			if(lowerTimeByOneBackEdge[nextChild]>discoveryTime[child]){
				bridges.push_back({child,nextChild});
			}
		}
	}
}



void solve(){
	
	int n,m;
	cin>>n>>m; 

	visited=vector<bool>(n);
	discoveryTime=vector<int>(n);
	lowerTimeByOneBackEdge=vector<int>(n);
	for(int i=0;i<n;i++)
	{
		vector<int>tmp;
		adj.push_back(tmp);
	}
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	dfs(1);

	for(auto [x,y]:bridges)
		cout<<x<<" "<<y<<endl;


}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}



