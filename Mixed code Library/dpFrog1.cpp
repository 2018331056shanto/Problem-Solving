#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	std::vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int x;
		cin>>x;
		v.push_back(x);
	}
	std::vector<int>dp(n,1e9+5);
	dp[0]=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=i+k;j++)
		{
			if(j<n)
			{
				dp[j]=min(dp[j],dp[i]+abs(v[i]-v[j]));

			}
		}
	}
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<dp[i]<<" ";
	// }
	cout<<dp[n-1]<<endl;
}	