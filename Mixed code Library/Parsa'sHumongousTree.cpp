#include<bits/stdc++.h>
using namespace std;

int a[100008][2];
std::vector<int>v[100008];
long long int dp[100010][2];

 void dfs(int child,int parent )
 {
 	dp[child][0]=dp[child][1]=0;
 	for(int i=0;i<v[child].size();i++)
 	{
 		int next=v[child][i];
 		if(next==parent)
 			continue;
 		dfs(next,child);
 		//cout<<next<<" "<<child<<endl;
 		dp[child][0]+=max(abs(a[next][0]-a[child][0])+dp[next][0],abs(a[child][0]-a[next][1])+dp[next][1]);
 		//cout<<" zero  "<<" "<<dp[child][0]<<" ";
 		dp[child][1]+=max(abs(a[next][0]-a[child][1])+dp[next][0],abs(a[child][1]-a[next][1])+dp[next][1]);
		//cout<<" one "<<" "<<dp[child][1]<<" "<<endl; 	
 	}

 }
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int x,y;
			cin>>x>>y;
			a[i][0]=x;
			a[i][1]=y;

		}
		fill(v+1,v+n+1,vector<int>());
		for(int i=0;i<n-1;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		dfs(1,-1);
		cout<<max(dp[1][1],dp[1][0])<<endl;
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<dp[i][1]<<" ";
		// }


	}
}	