#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int x,y;
	cin>>x>>y; 

	int ans=0; 

	ans+=ceil((double)y/(double)2);

	int remain=(ans*15)-(y*4);

	if(remain<x)
	{
		int extra=x-remain;

		ans+=ceil((double)extra/(double)15);
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
