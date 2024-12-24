#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];


	}

	int mn=0,mx=int(1e9);

	for(int i=0;i<n-1;i++)
	{
		int x=a[i];
		int y=a[i+1];

		int midl=(x+y)/2;
		int midr=(x+y+1)/2;

		if(x<y)
		{
			mx=min(mx,midl);
		}
		if(x>y)
		{
			mn=max(mn,midr);
		}
	}
	if(mn<=mx)
	{
		cout<<mn<<endl;
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
