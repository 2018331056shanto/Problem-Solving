#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;

	vector<vector<char>>v(n,vector<char>(n,'0'));

	int ans=0;
	// int x=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
			// v[i][j]=x;
			// x++;
		}

	}

	for(int i=0;i<n/2;i++)
	{
		for(int j=0;j<n/2;j++)


		{
			// cout<<i<<" : "<<j<<" "<<j<<" : "<<n-1-i<<" "<<n-1-i<<" : "<<n-1-j<<" "<<n-1-j<<" : "<<i<<endl;
			// cout<<v[i][j]<<" "<<v[j][n-1-i]<<" "<<v[n-1-i][n-1-j]<<" "<<v[n-1-j][i]<<endl;
			int sum=v[i][j]+v[j][n-1-i]+v[n-1-i][n-1-j]+v[n-1-j][i];
			int mx=max({v[i][j],v[j][n-1-i],v[n-1-i][n-1-j],v[n-1-j][i]});
			ans+=mx*4-sum;

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
