	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n,m;
		cin>>n>>m;
		vector<long long>v(n);
		for(int i=1;i<=n;i++)
		{
			cin>>v[i];
			// cout<<v[i]<<" ";
		}
		// cout<<endl;
		long long gAns[100010];
		long long lAns[100010];
		memset(gAns,0,sizeof(gAns));
		memset(lAns,0,sizeof(lAns));
		
		for(int i=2;i<=n;i++)
		{
			if(v[i]>=v[i-1])
			{
				gAns[i]=gAns[i-1];
			}
			else
			{
				gAns[i]=gAns[i-1]+(v[i-1]-v[i]);
			}
		}

		for(int i=n-1;i>=0;i--)
		{
			if(v[i]>=v[i+1])
			{
				lAns[i]=lAns[i+1];
			}
			else
			{
				lAns[i]=lAns[i+1]+(v[i+1]-v[i]);
			}
		}
		
		for (int i = 0; i < m; ++i)
		{

			int x,y;
			cin>>x>>y;
			if(x<y)
			{
				cout<<gAns[y]-gAns[x]<<endl;
			}
			else
			{
				cout<<lAns[y]-lAns[x]<<endl;
			}
		}
		
	}

	int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		
		
			solve();
		
	}