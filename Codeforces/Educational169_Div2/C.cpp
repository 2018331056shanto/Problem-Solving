#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n,k;
	cin>>n>>k; 

	std::vector<long long> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];

	}
	
	sort(v.begin(),v.end(),greater<>());

	long long ans=0;
	long long rem=k;

	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			ans+=v[i];
		}
		else
		{
			long long needed=min(rem,v[i-1]-v[i]);
			
			v[i]+=needed;
			rem-=needed;

			ans-=v[i];


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
