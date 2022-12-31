#include<bits/stdc++.h>
using namespace std;


void solve(){
	// a b c a d c b d
	// c d	d b b a a c
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	// cout<<a<<b<<c<<d<<endl;
	if(a<b&&a<c&&c<d&&b<d)

	{
		cout<<"YES"<<endl;

	}
	else if(b<a&&b<d&&a<c&&d<c)
	{
		cout<<"YES"<<endl;
	}
	else if(d<b&&d<c&&b<a&&c<a)
	{
		cout<<"YES"<<endl;
	}
	else if(c<a&&c<d&&d<b&&a<b)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
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
