#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	unordered_map<char,int>mp;

	for(auto x:s)
	{
		if(x=='?')
			continue;

		mp[x]++;
	}

	int ans=0;

	for(auto [x,y]:mp)
	{
		if(y>=n)
		{
			ans+=n;
		}
		else
		{
			ans+=y;
		}
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
