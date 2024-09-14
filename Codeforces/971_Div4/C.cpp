#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long  x,y,k;

	cin>>x>>y>>k;
	int ans=0;

	int xx=ceil((double)x/(double)k);
	int yy=ceil((double)y/(double)k);
	
	ans+=xx+yy;
	if(yy>=xx)

	{
		ans+=(yy-xx);
	}
	else
	{
		ans=xx*2-1;
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