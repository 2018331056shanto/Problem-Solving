	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		string s;
		cin>>s;
		int n=s.size();
		int ltm0=n-1;
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]=='0')
			{
				ltm0=i;
			}
		}
		int rtm1=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				rtm1=i;
			}
		}
		// cout<<rtm1<<" "<<ltm0<<endl;
		cout<<abs(rtm1-ltm0)+1<<endl;
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