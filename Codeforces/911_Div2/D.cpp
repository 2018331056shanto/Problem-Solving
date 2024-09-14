#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	int n;
	cin>>n;

	vector<pair<int,int>>v;

	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end());

	for(auto x:v)
	{
		cout<<x.first<<" "<<x.second<<endl;
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



