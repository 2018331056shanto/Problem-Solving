#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	std::vector<int>a;
	std::vector<int>pos;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
		if(x==1)
		{
			pos.push_back(i);
		}
	}
	int k=pos.size();
	std::vector<std::vector<int>>dp(n+1,std::vector<int>(k+1,1e9));
	dp[0][0]=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			if(dp[i][j]==1e9)
				continue;
			dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
			if(j<k&&a[i]==0)
			{
				dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]+abs(pos[j]-i));
			}
		}
	}
	
	cout<<dp[n][k]<<endl;
}	
