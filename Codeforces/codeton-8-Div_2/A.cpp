#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k; 
	cin>>n>>k; 

	if(n==k)
	{
		for(int i=0;i<n;i++)
		{
			cout<<1<<" ";
		}
		cout<<endl; 
	}
	else if(k==1)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	else
	{
		cout<<-1<<endl;
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
