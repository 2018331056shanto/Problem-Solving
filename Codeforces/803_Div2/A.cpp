	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(int i=0;i<n;i++)
		{
			int x=v[i];
			vector<int>v1;
			for(int j=0;j<n;j++)
			{
				if(i==j)
					continue;
				v1.push_back(v[j]);
			}
			int l=v1[0];
			for(int k=1;k<n-1;k++)
			{
				l^=v1[k];
			}
			if(x==l)
			{
				cout<<x<<endl;
				return;
			}
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