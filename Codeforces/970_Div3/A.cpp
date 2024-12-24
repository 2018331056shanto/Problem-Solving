#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int a,b;
	cin>>a>>b;

	if(a==0&&b%2==0)
	{
		cout<<"Yes"<<endl;
	}
	else if(a>1&&a%2==0)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
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
