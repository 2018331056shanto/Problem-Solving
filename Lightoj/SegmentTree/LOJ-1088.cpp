#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,q;
	cin>>n>>q;

	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	while(q--)
	{
		int x,y;
		cin>>x>>y;

		int idx1=lower_bound(v.begin(),v.end(),x)-v.begin();
		int idx2=upper_bound(v.begin(),v.end(),y)-v.begin();
		if(idx1<idx2)
		{
			cout<<idx2-idx1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	// int idx=lower_bound(v.begin(),v.end(),2)-v.begin();

	// cout<<idx<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		for(int i=1;i<=t;i++)
		{
			cout<<"Case "<<i<<": "<<endl;
			solve();
		}
	}
