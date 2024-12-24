#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k,g;
	cin>>n>>k>>g;
	long long  total=k*g;
	int give=(g-1)/2;
	// cout<<give<<endl;	
	// int possiblegiven=total/give;
	// cout<<possiblegiven<<endl;
	long long ans=0;
	long long afford=(n-1)*give;
	long long remain=total-afford;
	long long xx=remain%g;
	if(afford>=total)
	{
		cout<<total<<endl;
	}
	
	else if(xx<=give)
	{
		ans=afford+xx;
		cout<<ans<<endl;
	}
	else
	{
		cout<<ans<<endl;
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
