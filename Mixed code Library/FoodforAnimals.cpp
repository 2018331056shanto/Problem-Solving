	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;
		int dif=0;
		if(a<x)
		{
			dif=x-a;
		}	
		if(b<y)
		{
			dif+=y-b;
		}
		if(dif>c)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
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