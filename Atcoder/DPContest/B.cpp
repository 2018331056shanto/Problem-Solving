#include<bits/stdc++.h>
using namespace std;

int frog(vector<int>&dp,vector<int>&v,int k,int start)
{

	if(start>=v.size())
	{
		return 1e6;
	}
	if(start==v.size()-1)
	{
		return 0;
	}

	if(dp[start]!=-1)
	{
		return dp[start];
	}

	int total=INT_MAX;

	for(int i=1;i<=k;i++)
	{
		total=min(total,frog(dp,v,k,start+i)+abs(v[start]-v[start+i]));	
	}

	// total=min(frog(dp,v,start+1)+abs(v[start]-v[start+1]),frog(dp,v,start+2)+abs(v[start+2]-v[start]));

	return dp[start]=total;
	
}


void solve(){
	
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	vector<int>dp(n+1,-1);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	cout<<frog(dp,v,k,0)<<endl;

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
