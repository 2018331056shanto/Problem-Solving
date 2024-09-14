#include<bits/stdc++.h>
using namespace std;

int recursion(vector<long long>&a,vector<long long>&b,vector<long long>&c,vector<vector<long long>>&dp,long long idx,long long prev,int n)
{

	if(idx==n)
	{
		return 0;
	}

	if(dp[idx][prev]!=-1)
	{
		return dp[idx][prev];
	}
	long long ans=INT_MIN;

	if(prev==0)
	{
		ans=max(ans,b[idx]+recursion(a,b,c,dp,idx+1,1,n));
		ans=max(ans,c[idx]+recursion(a,b,c,dp,idx+1,2,n));
	}

	else if(prev==1)
	{
		ans=max(ans,a[idx]+recursion(a,b,c,dp,idx+1,0,n));
		ans=max(ans,c[idx]+recursion(a,b,c,dp,idx+1,2,n));
	}
	else if(prev==2)
	{
		ans=max(ans,a[idx]+recursion(a,b,c,dp,idx+1,0,n));
		ans=max(ans,b[idx]+recursion(a,b,c,dp,idx+1,1,n));
	}
	else
	{
		ans=max(ans,a[idx]+recursion(a,b,c,dp,idx+1,0,n));
		ans=max(ans,b[idx]+recursion(a,b,c,dp,idx+1,1,n));
		ans=max(ans,c[idx]+recursion(a,b,c,dp,idx+1,2,n));
	
	}
	dp[idx][prev]=ans;

	return dp[idx][prev];
}

void solve(){
	
	int n;
	cin>>n;
	vector<long long>a(n),b(n),c(n);

	vector<vector<long long>>dp(n+1,vector<long long>(4,-1));

	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}

	cout<<recursion(a,b,c,dp,0,3,n)<<endl;
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
