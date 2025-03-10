#include<bits/stdc++.h>

using namespace std;

int recursion(int n,int a,int b,vector<int>&dp)
{
	if(n<0)
	{
		return INT_MAX-1000;
	}
	if(n==0)
	{
		return 0;
	}

	if(dp[n]!=-1)
	{
		return dp[n];
	}
	
	int ans=min(a+recursion(n-1,a,b,dp),b+recursion(n-2,a,b,dp));

	return dp[n]=ans;


}

void solve(){
	
	int n,a,b;
	cin>>n>>a>>b; 


	vector<int>dp(n+1,-1);

	
	cout<<recursion(n,a,b,dp)<<endl;



}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t; 

	while(t--){

		solve();
	}
}
