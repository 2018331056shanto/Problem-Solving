#include<bits/stdc++.h>
using namespace std;

const int LG=19;
const int sz=3e5+20;
std::vector<long long> adj[sz];
long long dp[LG+1][sz];
vector<long long>value(sz+1);

void dfs(int v,int par=-1)
{
	for(int i=0;i<=LG;i++)
	{
		dp[i][v]=(i+1)*value[v];
	}

	for(auto u:adj[v])
	{
		if(u==par)
		{
			continue;
		}

		dfs(u,v);
		long long mn1=INT_MAX,mn2=INT_MAX;

		for(int i=0;i<=LG;i++)
		{
			mn2=min(mn2,dp[i][u]);

			if(mn2<mn1)
			{
				swap(mn1,mn2);
			}
		}

		for(int i=0;i<=LG;i++)
		{
			int val=mn1;
			if(val==dp[i][u])
			{
				val=mn2;
			}
			dp[i][v]+=val;
		}
	}
}
void solve(){
	
	long long n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		value[i]=0;
		adj[i].clear();

	}
	for(int i=0;i<n;i++)
	{
		cin>>value[i];
	}
	if(n==1)
	{
		cout<<value[0]<<endl;
		return;
	}
	for(int i=0;i<n-1;i++)
	{
		int x,y;

		cin>>x>>y;
		--x,--y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	dfs(0);
	long long ans=INT_MAX;

	for(int i=0;i<=LG;i++)
	{
		ans=min(ans,dp[i][0]);
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
