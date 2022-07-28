#include<bits/stdc++.h>
using namespace std;
int dp[200005][2];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
	   s="#"+s;
	   for(int i=0;i<200005;i++)
	   {
	   	dp[i][0]=0;
	   	dp[i][1]=0;
	   }
	   int n=s.size()-1;
	   long long int ans=0;
	   dp[0][1]=dp[0][0]=0;
       for(int i=1;i<=n;i++)
       {
       	int mx=0;
       	if(s[i]!='1')
       	{
       		dp[i][0]=dp[i-1][1]+1;
       		mx=dp[i][0];
       	}
       	if(s[i]!='0')
       	{
       		dp[i][1]=dp[i-1][0]+1;
       		mx=max(dp[i][1],mx);
       	}
			ans+=mx;

       }
       cout<<ans<<endl;
       
	}

}	