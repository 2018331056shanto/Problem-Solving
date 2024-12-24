	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		long long  n,q;
		cin>>n>>q;
		long long  ans=n*(n+1)/2;
		vector<long long >v(n+2,0);
		for(long long  i=0;i<n;i++)
		{
			cin>>v[i+1];
		}

		for(long long  i=0;i<=n;i++)
		{
			if(v[i]!=v[i+1])
			{
				ans+=(i*(n-i));
			}
		}
		while(q--)
		{
			long long  i,x;
			cin>>i>>x;
			for(long long  j:{i-1,i})
			{
				if(v[j]!=v[j+1])
				{
					ans-=(j*(n-j));
				}
			}

			v[i]=x;
			for(long long  j:{i-1,i})
			{
				if(v[j]!=v[j+1])
				{
					ans+=(j*(n-j));
				}
			}
			cout<<ans<<endl;
		}
	
	}

	int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		long long  t;
		// cin>>t;
		// while(t--)
		// {
			solve();
		// }
	}
