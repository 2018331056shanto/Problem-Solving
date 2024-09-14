#include<bits/stdc++.h>
using namespace std;

long long knapsack(vector<long long>&weight,vector<long long>&profit,vector<vector<long long>>&dp,long long cap,long long start)
{

	if(start<0)
	{
		return 0;
	}
	
		if(dp[start][cap]!=-1)
	{
		return dp[start][cap];
	}

	

	if(weight[start]>cap)
	{
		return dp[start][cap]=knapsack(weight,profit,dp,cap,start-1);
	}

	else
	{
		dp[start][cap]=max(profit[start]+knapsack(weight,profit,dp,cap-weight[start],start-1),knapsack(weight,profit,dp,cap,start-1));

	}
		

	return dp[start][cap];
}

void solve(){
	long long n,cap;
	cin>>n>>cap;
	vector<long long>weight(n),profit(n);

	for(int i=0;i<n;i++)
	{
		cin>>weight[i]>>profit[i];
	}

	vector<vector<long long>>dp(n+1,vector<long long>(cap+1,-1));

	cout<<knapsack(weight,profit,dp,cap,n)<<endl;

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
