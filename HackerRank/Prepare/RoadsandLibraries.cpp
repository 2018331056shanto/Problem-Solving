#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<long long>>&adj,vector<int>&visited,int start,long long&region)
{
	visited[start]=1;

	for(auto x:adj[start])
	{
		if(!visited[x])
		{
			region++;

			dfs(adj,visited,x,region);
		}
	}
}

void solve(){
	
	long long n,m,clib,croad;

	cin>>n>>m>>clib>>croad;

	std::vector<vector<long long>> adj(n+1);

	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y; 

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	vector<int>visited(n+1);

	long long ans=0;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			long long region=1;
			dfs(adj,visited,i,region);

			ans+=min((region-1)*croad+clib,clib*region);
		}
	}

	cout<<ans<<endl;

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
