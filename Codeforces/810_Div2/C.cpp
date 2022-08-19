	#include<bits/stdc++.h>
	using namespace std;
	
	void solve()
	{
		int n,m,k;
		cin>>n>>m>>k;
		int a[100010];
		for(int i=1;i<=k;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+k+1);

		bool flag=false;
		long long total=0;
		for(int i=1;i<=k;i++)
		{
			//stripes in column direction
			if(a[i]/n>2)
			{
				flag=true;
			}
			if(a[i]/n>=2)
			{
				total+=a[i]/n;
			}
		}
		if(total>=m&&(flag || m%2==0))
		{
			cout<<"Yes"<<endl;
			return;
		}

		flag=false;
		total=0;
		for(int i=1;i<=k;i++)
		{
			//stripes in row direction
			if(a[i]/m>2)
			{
				flag=true;
			}
			if(a[i]/m>=2)
			{
				total+=a[i]/m;
			}
		}
		if(total>=n&&(flag || n%2==0))
		{
			cout<<"Yes"<<endl;
			return;
		}
		cout<<"No"<<endl;
	
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