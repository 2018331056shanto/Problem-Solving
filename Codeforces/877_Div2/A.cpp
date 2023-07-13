#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		
	}
	sort(v.begin(),v.end());

	for(int i=0;i<n;i++)
	{
		if(v[i]<0)
		{
			cout<<v[i]<<endl;
			return;
		}
	}
	cout<<v[n-1]<<endl;

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
