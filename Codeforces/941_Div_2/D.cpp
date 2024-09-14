#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k; 
	cin>>n>>k; 

	if(k>=n)
	{
		for(int i=0;i<n-1;i++)
		{
			cout<<1<<" ";
		}
		cout<<endl;
	}
	else
	{
		for(int i=k+1;i<=n;i++)
		{
			cout<<i<<" ";
		}
		cout<<endl;

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
