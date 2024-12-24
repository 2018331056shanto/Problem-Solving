#include<bits/stdc++.h>
using namespace std;

struct Rect
{
	int h,w;

};

void solve(){
	
	int n,k;
	cin>>n>>k;

	vector<Rect>a(n+1);

	for(int i=1;i<=n;i++)
	{
		cin>>a[i].h>>a[i].w;

	} 

	vector<vector<int>>dp(n+1,vector<int>(k+1,1e9));
	dp[0][0]=0;
	for(int i=1;i<=n;i++)
	{
		int h=a[i].h,w=a[i].w;

		vector<int>operation(h+w+1,1e9);


		for(int j=0;j<=h;j++)
		{
			for(int l=0;l<=w;l++)
			{
				operation[j+l]=min(operation[j+l],j*w+l*h-j*l);
			}
		}

		for(int j=0;j<=k;j++)
		{
			for(int l=0;j+l<=k&&l<=h+w;l++)
			{
				dp[i][j+l]=min(dp[i][j+l],operation[l]+dp[i-1][j]);
			}
		}
	}

int ans=dp[n][k];

if(ans>=1e9)
{
	cout<<-1<<endl;
}
else
{
	cout<<ans<<endl;
}


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
