	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long long x=a*d;
		long long y=c*b;
		if(x==y)
		{
			cout<<0<<endl;
		}
		
		else if(y!=0 &&x%y==0 ||x!=0&&y%x==0)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<2<<endl;
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