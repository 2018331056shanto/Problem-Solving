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
	int dif=(v[0]*2)-1;
	long long  ans=0;
	for(int i=1;i<n;i++)
	{
		int x=ceil((double)v[i]/(double)dif);
		--x;
		ans+=x;
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
