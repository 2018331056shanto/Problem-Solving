#include<bits/stdc++.h>
using namespace std;


void dfs(vector<pair<int,int>>v[],vector<int>&dp,vector<int>&id,int u,vector<bool>&vis)
{
	
	vis[u]=true;	
	// cout<<"index :"<<u<<endl;
	for(auto [x,y]:v[u])
	{

		if(!vis[x]){


		if(id[u]>=y)
		{
			dp[x]=dp[u]+1;

			
		}
		else{


			dp[x]=dp[u];
				
		
		}
			id[x]=y;
		// cout<<"uuu :"<<u<<endl;
		dfs(v,dp,id,x,vis);
	}

	}

}

void solve(){
	
	int n;
	cin>>n;

	vector<pair<int,int>>v[n+1];

	vector<int>dp(n+1,0);
	dp[1]=1;
	vector<int>id(n+1,0);
	

	vector<bool>vis(n+1,false);
	for(int i=1;i<n;i++)
	{
		int x,y;
		cin>>x>>y;

		v[x].push_back({y,i});
		v[y].push_back({x,i});
	}

	dfs(v,dp,id,1,vis);
	int ans=0;
	for(int i=0;i<=n;i++)
	{
		// cout<<dp[i]<<" ";
		ans=max(ans,dp[i]);
	}
	// cout<<endl;

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





