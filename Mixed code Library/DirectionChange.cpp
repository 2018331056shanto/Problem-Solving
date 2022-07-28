	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		int n,m;
		cin>>n>>m;
		int ans=0;
		if(n==1&&m==1)
		{
			cout<<0<<endl;
		}
		else if(n==1&&m>2||m==1&&n>2)
		{
			cout<<-1<<endl;
		}
		else
		{
			int mn=min(n,m);
			ans+=(2*mn)-2;
			int a=abs(n-m);
			if(a%2)
			{
				ans+=2*a-1;
			}
			else
			{
				ans+=2*a;
			}
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