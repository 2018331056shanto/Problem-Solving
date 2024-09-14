#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;
	cin>>n>>m; 
	string s;
	cin>>s; 

	map<char,int>mp;

	for(auto x:s)
	{
		mp[x]++;
	}

	// for(auto x:mp)
	// 	cout<<x.first<<" "<<x.second<<endl;

	int ans=0; 

	for(auto x:mp)
	{
		if(x.second>=m)
		{
			continue;
		}
		else
		{

			ans+=(m-x.second);
			
		}
	}

	// cout<<ans<<" "<<mp.size()<<endl;

	if(mp.size()==7)
	{
		cout<<ans<<endl;
	}
	else
	{
		cout<<(ans+((7-mp.size())*m))<<endl;
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
