#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n;
	cin>>n;
	long long ans=0;

	while(n>=1)
	{
		ans+=n;
		n/=2;
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
