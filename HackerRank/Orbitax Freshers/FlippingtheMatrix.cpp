#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n; 

	std::vector<vector<int>> v(2*n,vector<int>(2*n));
	for(int i=0;i<2*n;i++)
	{
		for(int j=0;j<2*n;j++)
		{
			cin>>v[i][j];
		}
	}


	int ans=0; 

	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			int mx=0;
			mx=max(v[i][j],mx);
			// cout<<"lt : "<<mx<<endl;
			mx=max(v[i][2*n-1-j],mx);
			// cout<<"r t "<<mx<<endl;
			mx=max(v[2*n-1-i][j],mx);
			// cout<<"l b "<<mx<<endl;
			mx=max(v[2*n-1-i][2*n-1-j],mx);

			// cout<<"r b "<<mx<<endl;
			ans+=mx;
		}
		// cout<<mx<<endl;
		
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
