#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n; 
	cin>>n; 
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		mp[x]++; 
	}

	if(mp.size()==n)
	{
		cout<<0<<endl;
	}
	else
	{
		int ans=0; 
		for(auto x:mp)
		{
			ans+=x.second/2; 
		}
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
