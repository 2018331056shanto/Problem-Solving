	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		long long mn=1e9;
		int n;
		cin>>n;
		long long total=0;
		std::vector<long long> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			total+=v[i];
			mn=min(v[i],mn);
		}
		cout<<total-(mn*n)<<endl;
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