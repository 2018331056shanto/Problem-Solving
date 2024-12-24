#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m; 
	cin>>n>>m; 
	string a,b;
	cin>>a>>b; 

	int j=0;
	int i=0;

	int ans=0;
	while(i<n&&j<m)
	{
		if(a[i]==b[j])
		{
			i++;
			j++;
			ans++;

		}
		else
		{
			j++;
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
