#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int l,r;
	cin>>l>>r;

	int ans=0;
	int increment=0;

	while(l<=r)
	{
		ans++;
		l+=increment;
		increment++;
	}

	cout<<ans-1<<endl;
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
