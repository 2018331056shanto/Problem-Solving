	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		std::vector<int> v;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x==0)
				v.push_back(i);
		}
		int ans=0;
		if(v.size()==0)
		{

			cout<<0<<endl;
			return ;
		}
		if(v.size()==1)
		{
			cout<<2<<endl;
			return;
		}
		int first=v[0];
		int last=v[v.size()-1];

		cout<<last-first+2<<endl;


	
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