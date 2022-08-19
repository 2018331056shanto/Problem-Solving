	#include<bits/stdc++.h>
	using namespace std;
	#define sz 100010
	void solve()
	{
		int n,m;
		cin>>n>>m;
		int a[sz];
		int x[sz],y[sz];
		int degree[sz];
		memset(a,0,sizeof(a));
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		memset(degree,0,sizeof(degree));
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int ans=INT_MAX;
		for(int i=1;i<=m;i++)
		{
			cin>>x[i]>>y[i];
			degree[x[i]]++;
			degree[y[i]]++;

		}
		if(m%2==0)
			ans=0;
		else{
			for(int i=1;i<=n;i++)
			{
				if(degree[i]%2==1)
				{
					ans=min(ans,a[i]);
				}
			}
			for(int i=1;i<=m;i++)
			{
				if(degree[x[i]]%2==0&&degree[y[i]]%2==0){
					ans=min(a[x[i]]+a[y[i]],ans);
				}
			}
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