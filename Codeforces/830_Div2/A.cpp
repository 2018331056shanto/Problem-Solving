#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int gcd;
	if(n==1&&v[0]!=1)
	{
		cout<<1<<endl;
		return;
	}
	else if(n==1&&v[0]==1)
	{
		cout<<0<<endl;
		return;
	}
	gcd=__gcd(v[0],v[1]);
	for(int i=2;i<n;i++)
	{
		gcd=__gcd(gcd,v[i]);
	}
	// cout<<gcd<<endl;
	if(gcd==1)
	{
		cout<<0<<endl;
	}
	else
	{
		int temp=__gcd(gcd,n);
		int temp1=__gcd(gcd,n-1);
		if(temp==1)
		{
			cout<<1<<endl;

		}
		else if(temp1==1)
		{
			cout<<2<<endl;
		}
		else
		{
			cout<<3<<endl;
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
