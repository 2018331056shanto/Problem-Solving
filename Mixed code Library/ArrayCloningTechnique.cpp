	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		std::map<int, int> map;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			++map[x];
		}
		int mx=0;
		for(auto &[x,y]:map)
		{
			mx=max(y,mx);
		}
		int ans=0;
		while(mx<n)
		{
			int d=min(n-mx,mx);
			ans+=1+d;
			mx+=d;
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