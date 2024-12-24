#include<bits/stdc++.h>
using namespace std;


const int N=2e5+20;
int ans=0;
std::vector<int> adj[N];

int sz[N];

void dfs(int child,int par)
{
	for(int i=0;i<adj[child].size();i++)
	{
		if(adj[child][i]!=par)
		{
			dfs(adj[child][i],child);
			sz[child]+=sz[adj[child][i]];
		}
	}
}


void solve(){

	int n,k;
	cin>>n>>k; 

	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y; 
		--x;
		--y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int x;
	for(int i=0;i<k;i++)
	{
		cin>>x;
		--x;
		sz[x]=1;

	}

	dfs(x,-1);

	int ans=0;

	for(int i=0;i<n;i++)
	{
		if(sz[i]>0)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	
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
