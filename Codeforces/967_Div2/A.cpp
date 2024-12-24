#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	std::map<int,int>mp;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		mp[x]++;
	}


	int mx=0; 

	for(auto [x,y]:mp)
	{
		mx=max(y,mx);
	}

	cout<<n-mx<<endl;
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
