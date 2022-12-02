#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	int n,q;
	cin>>n>>q;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	vector<long long>cumsum(n);
	cumsum[0]=v[0];
	for(int i=1;i<n;i++)
	{
		cumsum[i]=cumsum[i-1]+v[i];
	}
	vector<long long >Xor(n);
	Xor[0]=v[0];
	for(int i=1;i<n;i++)
	{
		Xor[i]=Xor[i-1]^v[i];
	}
	
	

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
