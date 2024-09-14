#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m,k;

	cin>>n>>m>>k; 


	
	std::vector<int> v(n);
	// map<int,int>mp1;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		// mp1[v[i]]++;
	}
	int f=v[m-1];
	// cout<<f<<endl;
	sort(v.begin(),v.end(),greater<>());

	map<int,int>mp,mp2;
	for(int i=n-1;i>=0;i--)
	{
		mp2[v[i]]=i; 
	} 

	for(int i=0;i<n;i++)
	{
		mp[v[i]]=i; 
	}

	int y=mp[f];
	int x=mp2[f];

	--k;

	// cout<<x<<" "<<y<<" "<<k<<endl;
	if(k>=x&&k<y)
	{
		cout<<"MAYBE"<<endl;
	}
	else if(k>=x&&k>=y)
	{
		cout<<"YES"<<endl;
	}
	else if(k<x&&k<y)
	{
		cout<<"NO"<<endl;
	}

	// cout<<x<<endl;


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
