	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n,m;
		cin>>n>>m;
		int mn=min(n,m);

		int ans=0;

		if(n==1&&m==1)
		{
			cout<<0<<endl;
			return;
		}
		ans=n-1+m-1+min(n,m);
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