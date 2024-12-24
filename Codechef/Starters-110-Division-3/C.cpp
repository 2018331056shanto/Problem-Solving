#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,b,k;
	cin>>n>>b>>k;


	int g=n-b;

	int remb=b- ((b/k)*k);

	int remg=g-((g/k)*k);

	int totalRem=remg+remb;

	int pairDance=min(remg,remb);

	cout<<totalRem-2*pairDance<<endl;




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
