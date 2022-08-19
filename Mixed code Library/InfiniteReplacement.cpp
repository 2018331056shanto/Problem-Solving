	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		string s,t;
		cin>>s>>t;
		if(t.size()==1&&t[0]=='a')
		{
			cout<<1<<endl;
			return;
		}
		for(char x:t)	 	              	   				
		{
			if(x=='a')
			{
				cout<<-1<<endl;
				return;
			}
		}
		long long ans=1;
		int n=s.size();
		while(n--)
		{
			ans=ans<<1;
		}
		cout<<ans<<endl;
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