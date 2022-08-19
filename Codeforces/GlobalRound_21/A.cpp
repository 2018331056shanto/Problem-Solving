	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		long int n,z;
		cin>>n>>z;
		vector<long int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		long int mx=0;
		for(auto x:v)
		{
			long int m=(long int)(x|z);
			mx=max(m,mx);
		}
		cout<<mx<<endl;
		
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