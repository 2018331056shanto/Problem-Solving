#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m,q; 
	cin>>n>>m>>q; 

	int a,b,c; 

	cin>>a>>b>>c; 

	if(a>b)
		swap(a,b);

	if(c<a)
	{
		cout<<a-1<<endl;
	}
	else if(c>b)
	{
		cout<<n-b<<endl;
	}
	else
	{
		cout<<(b-a)/2<<endl;
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
