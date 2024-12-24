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
		sort(v.begin(),v.end(),greater<>());
		long long  max=v[0];
		long long sumExceptMax=0;
		for(int i=1;i<n;i++)
		{
			sumExceptMax+=v[i];
		}
		if(max==0)
		{
			cout<<0<<endl;
			return ;
		}
		if(sumExceptMax>=max)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<max-sumExceptMax<<endl;
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