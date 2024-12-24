#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	std::vector<long long> v(n),v1(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>v1[i];
	}
	long long  cost[16];
	for(int i=0;i<16;i++)
	{
		cost[i]=1e12;
	}
	for(int i=0;i<n;i++)
	{
		cost[1]=min(cost[1],abs(v[0]-v1[i]));
		cost[2]=min(cost[2],abs(v[n-1]-v1[i]));
		cost[4]=min(cost[4],abs(v1[0]-v[i]));
		cost[8]=min(cost[8],abs(v1[n-1]-v[i]));

	}
	cost[5]=abs(v[0]-v1[0]);
	cost[9]=abs(v[0]-v1[n-1]);
	cost[6]=abs(v[n-1]-v1[0]);
	cost[10]=abs(v[n-1]-v1[n-1]);
	long long  ans[16];
	for(int i=0;i<16;i++)
	{
		ans[i]=1e12;
	}
	ans[0]=0;
	for(int i=0;i<16;i++)
	{
		for(int j=0;j<16;j++)
		{
			ans[i|j]=min(ans[i|j],ans[i]+cost[j]);
		}
	}
	// for(int i=0;i<16;i++)
	// {
	// 	cout<<ans[i]<<" ";
	// }
	// cout<<endl;
	cout<<ans[15]<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	