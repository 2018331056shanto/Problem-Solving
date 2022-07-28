	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			v[i]-=i;
		}
		int mn=*min_element(v.begin(),v.end());
		int mx=*max_element(v.begin(),v.end());
		cout<<(mx-mn<=2?"YES":"NO")<<endl;
	
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