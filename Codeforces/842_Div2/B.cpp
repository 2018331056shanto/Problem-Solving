#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k;
	vector<int>v(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}

	int x=1;
	for(int i=1;i<=n;i++)
	{
		if(v[i]==x)
		{
			x++;
		}
	}
	cout<<(n-x+k)/k<<endl;

		




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
