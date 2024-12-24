#include<bits/stdc++.h>
using namespace std;
int dp[200100];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,0,sizeof(dp));
		string s;
		cin>>s;
		int cnt0=0;
		int cnt1=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='0')
			{
				cnt0++;
			}
			else
			{
				cnt1++;
			}
			// if(cnt1==cnt0)
			// {
			// 	dp[i+1]=dp[i];
			// }
			// else
			// {
			// 	dp[i+1]=max(dp[i],min(cnt0,cnt1));
			// }
			
		}
		if(cnt1==cnt0)
		{
			cout<<cnt1-1<<endl;
		}
		else
		{
			cout<<min(cnt1,cnt0)<<endl;
		}
		// cout<<dp[s.size()]<<endl;
	}
	
}