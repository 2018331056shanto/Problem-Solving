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


	int mod=0;
	for(int i=0,j=n-1;i<=j;i++,j--)
	{
		int dif=abs(v[i]-v[j]);

		mod=gcd(mod,dif);
	}
	cout<<mod<<endl;
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
