#include<bits/stdc++.h>
using namespace std;


void solve(){

	int i,j,k;
	cin>>i>>j>>k;
	int ans=0;

	for(int x=i;x<=j;x++)
	{
		string s=to_string(x);

		reverse(s.begin(),s.end());
		int y=stoll(s);

		if(abs(x-y)%k==0)
		{
			ans++;
		}
	}

	cout<<ans<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
