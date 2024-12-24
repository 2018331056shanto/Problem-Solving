	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		int n;
		cin>>n;
		std::vector<int> a(n),b(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		long long ans=0;
		for(int i=0;i<n-1;i++)
		{
			int x=abs(a[i+1]-a[i]);
			x+=abs(b[i+1]-b[i]);
			int y=abs(a[i+1]-b[i]);
			y+=abs(b[i+1]-a[i]);
			// cout<<x<<" "<<y<<endl;
			ans+=min(x,y);
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