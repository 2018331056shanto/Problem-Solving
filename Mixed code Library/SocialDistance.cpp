	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n,m;
		cin>>n>>m;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		long long ans=0;
		sort(v.begin(),v.end(),greater<>());
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				ans+=2*v[i]+1;
			}
			else if(i==n-1)
			{
				ans+=1;
			}
			else
			{
				ans+=v[i]+1;
			}
		}
		if(ans<=m)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
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