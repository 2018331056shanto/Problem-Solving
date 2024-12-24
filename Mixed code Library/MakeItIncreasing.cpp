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
		if(n==1)
		{
			cout<<0<<endl;
			return ;
		}
		if(v[n-1]==0&&n!=1)
		{
			cout<<-1<<endl;
			return;
		}
		int ans=0;
		for(int i=n-2;i>=0;i--)
		{
			int x=v[i];
			int y=v[i+1];
			while(x>=y)
			{
				x/=2;
				ans++;
			}
			v[i]=x;
			if(x==0&&i!=0)
			{
				cout<<-1<<endl;
				return;
			}
		}
		// for(auto x:v)
		// {
		// 	cout<<x<<endl;
		// }
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