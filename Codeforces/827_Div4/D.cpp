#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	int even=0;
	vector<int>v(n);
	map<int,int>mp;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		mp[x]=i;
	}
	int mx=0;
	for(auto x:mp)
	{
		// int xx=x.first;
		// cout<<xx<<endl;
		// cout<<x.first<<" "<<x.second<<endl;
		for(auto y:mp)
		{
			int a=x.first;
			int b=y.first;
			int c=x.second;
			int d=y.second;
			int x=__gcd(a,b);
			if(x==1)
			{
				
				mx=max(mx,c+d);
			}
		}
	}
if(mx==0)
{
	cout<<-1<<endl;
}
else{
	cout<<mx<<endl;
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
