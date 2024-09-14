#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	std::vector<int> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int ans=0;

	for(int i=0;i<n-1;i++)
	{
		ans=max(ans,min(v[i],v[i+1]));
	}

	for(int i=0;i<n-2;i++)
	{
		ans=max(ans,min(v[i],v[i+2]));
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
