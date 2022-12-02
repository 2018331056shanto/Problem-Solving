#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string v;
	cin>>v;

	if(n==1)
	{
		cout<<0<<endl;
		return;
	}

	int cnt=0;

	for(int i=0;i<n-1;i++)

	{
		// cout<<"h"<<endl;
		if(v[i]=='1' and v[i+1]=='0')
		{
			cnt+=2;
		}

	}
	if(cnt&&v[n-1]=='0')
	{
		--cnt;
	}
	cout<<cnt<<endl;
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
