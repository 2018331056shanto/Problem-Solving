#include<bits/stdc++.h>
using namespace std;
int ans=0;

int dfs(vector<int>adjList[],int start,int prev,vector<int>&dp,vector<int>&cost,vector<int>&vis)
{

	if(cost[start]<cost[prev])
	{
		return 0;
	}

	if(dp[start]!=-1)
	{
		return dp[start];
	}
	vis[start]=1;

	int temp=0;
	for(int i=0;i<adjList[start].size();i++)
	{
		if(vis[adjList[start][i]]!=1)
		{
			temp=1+dfs(adjList,adjList[start][i],start,dp,cost,vis);
			vis[start]=0;
		}
	}

	return dp[start]=max(ans,temp);

}

void solve(){
	
	int v,e;

	cin>>v>>e;
	vector<int>cost(v+1,0);
	vector<int>dp(v+2,-1);
	vector<int>vis(v+1);

	for(int i=1;i<=v;i++)
	{
		cin>>cost[i];
	}
	vector<int>adjList[v+1];
	for(int i=0;i<e;i++)
	{
		int x,y;
		cin>>x>>y;

		adjList[x].push_back(y);
		adjList[y].push_back(x);
	}


	cout<<dfs(adjList,1,0,dp,cost,vis)<<endl;
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
