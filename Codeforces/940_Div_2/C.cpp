#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
std::vector<int> dp(3*100000);


void solve(){


	int n,k; 
	cin>>n>>k; 

	int used=0; 

	for(int i=0;i<k;i++)
	{
		int r,c; 
		cin>>r>>c; 

		used+=2-(r==c);
	}	

	int rem=n-used;

	dp[0]=dp[1]=1; 

	for(int i=2;i<=rem;i++)
	{
		dp[i]=(dp[i-1]+2ll*(i-1)*dp[i-2]%mod)%mod;
	}

	cout<<dp[rem]<<endl;

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
