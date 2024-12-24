#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;

	map<char,int>mp;

	for(auto x:s)
	{
		mp[x]++;
	}

	int ans=0;
	for(auto x:mp)
	{
		if(x.first-'A'+1<=x.second)
		{
			ans++;
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
