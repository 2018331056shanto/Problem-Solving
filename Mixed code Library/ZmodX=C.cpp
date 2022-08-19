	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int a,b,c;
		cin>>a>>b>>c;
		int x,y,z;
		z=c;
		y=z+b;
		x=y+a;
		cout<<x<<" "<<y<<" "<<z<<endl;
	
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