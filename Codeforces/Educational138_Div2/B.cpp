#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	long long mx=0;
	vector<long long>v(n),v1(n);
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		sum+=v[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>v1[i];
		mx=max(mx,v1[i]);
		sum+=v1[i];
	}

	
	cout<<sum-mx<<endl;
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
