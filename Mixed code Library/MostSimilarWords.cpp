	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		int n,m;
		cin>>n>>m;
		std::vector<string> v;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			v.push_back(s);
		}
		int mn=1e9;
		for(int i=0;i<n;i++)
		{

			string x=v[i];
			for(int j=i+1;j<n;j++)
			{
				int total=0;
				string y=v[j];
				for(int k=0;k<m;k++)
				{
					total+=abs(x[k]-y[k]);	
				}
				mn=min(total,mn);
			}
		}
		cout<<mn<<endl;
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