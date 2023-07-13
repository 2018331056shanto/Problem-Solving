#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n,k,g;
	cin>>n>>k>>g;
	long long  total=k*g;
	long long give=(g-1)/2;
	
	long long ans=0;
	long long afford=min(give*n,total);
	long long remain=total-afford;
	long long xx=remain%g;
	
	if(xx>0)
	{
		afford-=give;

		long long rest=(give+xx)%g;
		if(rest<=give)
		{
			afford+=rest;
		}
		else
		{
			afford-=g-rest;
		}
		cout<<afford<<endl;
		return;
	}

	cout<<afford<<endl;


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
