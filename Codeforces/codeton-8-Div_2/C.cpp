#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,x,y; 
	cin>>n>>x>>y;

	std::vector<int> v(x);
	for(int i=0;i<x;i++)
	{
		cin>>v[i];
		--v[i];
	}

	sort(v.begin(),v.end());

	int ans=x-2; 


	for(int i=0;i<x;i++)
	{
		int dist=(i<x-1?v[i+1]-v[i]:v[0]+n-v[i]);

		if(dist==2)
		{
			ans+=1; 
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

