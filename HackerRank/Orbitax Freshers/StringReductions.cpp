#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string s;
	cin>>s; 

	std::vector<int> v(26);
	string ans="";

	for(auto x:s)
	{
		if(v[x-'a']==0)
		{
			ans+=x;
			v[x-'a']++;
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
