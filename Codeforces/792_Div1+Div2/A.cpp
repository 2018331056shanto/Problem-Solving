	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n;
		cin>>n;
		std::vector<int> v;
		while(n>0)
		{
			int x=n%10;
			n/=10;
			v.push_back(x);

		}if(v.size()==2)
		{
			cout<<v[0]<<endl;
			return ;
		}
		sort(v.begin(),v.end());
		cout<<v[0]<<endl;

	
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