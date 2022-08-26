	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		long long n,k,b,s;
		cin>>n>>k>>b>>s;
		vector<long long>v(n);
		v[0]=k*b;

		s-=k*b;
		if(s<0)
		{
			cout<<-1<<endl;
			return;
		}
		for(int i=0;i<n;i++)
		{
			int cur=min(k-1,s);
			v[i]+=cur;
			s-=cur;
		}
		if(s>0)
		{
			cout<<-1<<endl;
			return;

		}
		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;

	
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