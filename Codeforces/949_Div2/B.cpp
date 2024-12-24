#include<bits/stdc++.h>
using namespace std;

    bool isSet(long long x, long long bit) {return ((x >> bit) & 1L) == 1LL;}


void solve(){
	
	long long n,m;
	cin>>n>>m; 

	long long  l=max(0ll,n-m);

	long long r=n+m; 


	long long val=1;
	long long ans=0;

	for(long long i=0;i<=32;i++)
	{
		if(r-l>=val)
		{
			ans+=val;
		}
		else if(isSet(l,i))
			ans+=val;
		else if(isSet(r,i))
			ans+=val;
		val*=2;
	}
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
