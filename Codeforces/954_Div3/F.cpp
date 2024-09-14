#include<bits/stdc++.h>
using namespace std;

const int N=1e5+20;

std::vector<int>adj[N];
vector<int>dis(N),low(N),sz(N);
vector<bool>visited(N);
vector<int>artiPoint;


void dfs(int u){
	visited[u]=true;
	sz[u]=true;

	for(auto v:adj[u])
	{
		if(!visited[v])
		{
			dis[v]=dis[u]+1;
			dfs(v);

			sz[u]+=sz[v];
			low[u]=min(low[u],low[v]);
		}
		else
		{
			if(dis[v]==dis[u]-1)
				continue;

			low[u]=min(low[u],dis[v]);
		}
		if(low[u]>=dis[u])
		{
			artiPoint.push_back(u);
		}
	}
}

void solve(){
	
	int n,m;
	cin>>n>>m;

	for(int i=0;i<n;i++)
	{
		adj[i].clear();
		visited[i]=false;
		sz[i]=0;
		low[i]=0;
		dis[i]=0;
	}
	for(int i=0;i<m;i++)
	{

		int x,y;
		cin>>x>>y;
		--x,--y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}


	int sum=0;
	int best_edge=INT_MIN;

	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			dis[i]=0;
			artiPoint.clear();

			dfs(i);
			sum+=(sz[i]-1)*sz[i]/2;

			for(auto x:artiPoint)
			{
				best_edge=max(best_edge,sz[x]*(sz[i]-sz[x]));
			}
		}
	}
	cout<<sum-best_edge<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
