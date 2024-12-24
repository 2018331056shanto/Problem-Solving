#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n,a,b;
	cin>>n>>a>>b;

	long long gcd=__gcd(a,b);
	std::vector<long long> v;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x%gcd);
	}

	sort(v.begin(),v.end());


	long long ans=v[n-1]-v[0];

	for(int i=1;i<n;i++)
	{
		ans=min(ans,v[i-1]+gcd-v[i]);
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
