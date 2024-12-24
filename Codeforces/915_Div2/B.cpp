#include<bits/stdc++.h>
using namespace std;



void solve(){
	

	int n;
	cin>>n;

	
	vector<int>adj[n+1];

	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	int cnt=0;
	for(auto x:adj)
	{
		if(x.size()==1)
		{
			cnt++;
		}
	}
cout<<(cnt+1)/2<<endl;


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
