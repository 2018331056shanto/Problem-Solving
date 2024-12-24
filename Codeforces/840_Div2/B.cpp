#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,k;
	cin>>n>>k;
	vector<int>h(n),p(n);

	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first;
	}
	for(int i=0;i<n;i++){

		cin>>v[i].second;
	}

	sort(v.begin(),v.end());

	for(int i=0;i<n;i++)
	{
		h[i]=v[i].first;
	}

	for(int i=n-2;i>=0;i--)
		
	{
		v[i].second=min(v[i+1].second,v[i].second);
		// cout<<v[i].second<<" ";
	}
	// cout<<endl;



	int val=0;
	bool flag=true;
	
	while(k>0)
	{
		// if()
		auto up=upper_bound(h.begin(),h.end(),k+val);
		int id=up-h.begin();
		
		if(id==n)
		{
			cout<<"YES"<<endl;
			return;
		}
		val+=k;
		// cout<<v[id].second<<endl;
		k-=v[id].second;
		
	}
	
	cout<<"NO"<<endl;

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
