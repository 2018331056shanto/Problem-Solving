#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);
	int mx,mn;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	// cout<<"hello";
	mx=mn=v[0];
	for(int i=1;i<n;i++)
	{
		mx=mx|v[i];
		mn=mn&v[i];
	}
	cout<<mx-mn<<endl;
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
