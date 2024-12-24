	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(int i=n-1;i>0;i-=2)
		{
			if(v[i]<v[i-1])
			{
				swap(v[i],v[i-1]);
			}
		}
		bool ok=is_sorted(v.begin(),v.end());
		cout<<(ok?"YES":"NO")<<endl;
	
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