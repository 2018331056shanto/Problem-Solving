#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	if(n<7||n==9)
	{
		cout<<"NO"<<endl;
	}
	else

	{
		if(n%3==0)
		{
			cout<<"YES"<<endl;
			cout<<n-5<<" "<<4<<" "<<1<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			cout<<n-3<<" "<<2<<" "<<1<<endl;
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
