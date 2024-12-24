#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int l,r,L,R;
	cin>>l>>r>>L>>R;

	int seg=min(r,R)-max(l,L)+1;

	int ans=seg-1;
	if(seg<=0)
	{
		cout<<1<<endl;
	}
	else
	{
		ans+=(l!=L);
		ans+=(r!=R);
		cout<<ans<<endl;
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
