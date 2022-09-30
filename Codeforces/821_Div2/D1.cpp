#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long int n,x,y;
	string a,b;
	cin>>n>>x>>y>>a>>b;

	int d=0;
	for(int i=0;i<n;i++)
	{
		a[i]^=b[i];
		d+=a[i];
	}
	// for(auto l:a)
	// 	cout<<int(l)<<" ";
	// cout<<endl;
	// cout<<d<<endl;
	if(d%2)
	{
		cout<<-1<<endl;

	}

	else if(d==2)
	{
		int l,r;
		for(l=0;!a[l];)l++;
		for(r=n-1;!a[r];)r--;
			// cout<<l<<" "<<r<<endl;
		if(l+1==r)
			cout<<(min(x,y*2))<<endl;
		else
			cout<<(min((r-l)*x,y))<<endl;
	}
	else
		cout<<(d/2)*y<<endl;

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
