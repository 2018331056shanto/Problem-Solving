#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m,k;
	cin>>n>>m>>k;

	int w;
	cin>>w; 
	vector<int>v(w);

	for(int i=0;i<w;i++)
	{
		cin>>v[i];
	}

	sort(v.begin(),v.end(),greater<>());
	vector<int>num;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int lbx=max(0,i-k+1);
			int ubx=min(i,n-k);
			int lby=max(0,j-k+1);
			int uby=min(j,m-k);

			int s=(ubx-lbx+1)*(uby-lby+1);
			num.push_back(s);
		}
	}

	sort(num.begin(),num.end(),greater<>());

	long long ans=0; 

	for(int i=0;i<w;i++)
	{
		ans+=(long long)v[i]*(long long)num[i];
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
