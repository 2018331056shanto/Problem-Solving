#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;
	cin>>n>>m; 

	if(m>n)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		if(n%2==0&&m%2==0)
		{
			cout<<"YES"<<endl;
		}
		else if(n%2==1&&m%2==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

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
