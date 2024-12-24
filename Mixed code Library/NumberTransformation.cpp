	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int x,y;
		cin>>x>>y;
		if(x>y||y%x!=0)
		{
			cout<<0<<" "<<0<<endl;
		}
		else
		{
			cout<<1<<" "<<y/x<<endl;
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