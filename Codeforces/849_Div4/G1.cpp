#include<bits/stdc++.h>
using namespace std;


void solve(){

	long long n,c;
	cin>>n>>c;
	vector<long long>v;
	for(int i=1;i<=n;i++)
	{
		long long x;
		cin>>x;
		v.push_back(x+i);
	}
	sort(v.begin(),v.end());

	// for(auto x:v)
	// {
	// 	cout<<x<<" ";
	// }
	// cout<<endl;
	long long ans=0;
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=v[i];
		if(sum<=c)
		{
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
