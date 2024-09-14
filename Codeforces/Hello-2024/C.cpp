#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	std::vector<int> v(n);

	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int x=1e9,y=1e9;

	for(int i=0;i<n;i++)
	{
		if(x>y)
		{
			swap(x,y);
		}
		if(v[i]<=x)
		{
			x=v[i];
		}

		else if(v[i]<=y)
		{
			y=v[i];
		}
		else
		{
			x=v[i];
			ans++;
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
