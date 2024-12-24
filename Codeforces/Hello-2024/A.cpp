#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int a,b;
	cin>>a>>b;

	if((a+b)%2)
	{
		cout<<"Alice"<<endl;
	}
	else
	{
		cout<<"Bob"<<endl;
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
