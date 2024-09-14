#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back({x,i});
	}

	sort(v.begin(),v.end(),greater<>());
	vector<int>ans(n,0);
	for(int i=0;i<n;i++)
	{
		int x=v[i].second;
		ans[x]=i+1;
	}

	for(auto x:ans)
	{
		cout<<x<<" ";
	}
	cout<<endl;

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
