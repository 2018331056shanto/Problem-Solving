#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,w;
	cin>>n>>w;
	long long dp[n+1][w+1]={0};	long long  W[w]={0};
	long long pro[w]={0};
	for(int i=1;i<=n;i++)
	{
		long long  x,y;
		cin>>x>>y;
		W[i]=x;
		pro[i]=y;

	}	

	//cout<<"fuck"<<endl;
	for(int i=0;i<=n;i++)
	{
		//cout<<"bal"<<endl;
		for(int j=0;j<=w;j++)
		{
			if(i==0||j==0)
				dp[i][j]=0;
			//cout<<"MOter"<<endl;
			else if(j<W[i])
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-W[i]]+pro[i]);
			}

			
		}
	}
	//cout<<"bbbbba"<<endl;
	cout<<dp[n][w]<<endl;
	
}
