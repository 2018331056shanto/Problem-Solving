#include<bits/stdc++.h>
using namespace std;


void solve(){
		
	int n;
	cin>>n;
	
	map<int,vector<int>>mp;

	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;

		mp[x].push_back(y);
	}
	long long ans=0;

	for(auto [x,v]:mp)
	{
		sort(v.rbegin(),v.rend());

		int sz=v.size();
		for(int i=0;i<min(sz,x);i++)
		{
			ans+=v[i];
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
