#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n,m;
	cin>>n>>m;

	map<long long,long long>mp;
	vector<int>a(n);

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x; 
		mp[a[i]]+=x;
	}


	long long ans=0;
	for(auto [x,y]:mp)
	{
		ans=max(ans,min(m/x,y)*x);

		if(mp.find(x+1)!=mp.end())
		{
			long long z=mp[x+1];

			long long l=min(m/x,y)*x;

			long long p=m-l; 

			long long xx=min(p/(x+1),z);
			long long ll= xx*(x+1);

			p-=ll;

			long long re=min({min(m/x,y),z-xx,p});
			p-=re;


			ans=max(ans,m-p);


		}
	}
	cout<<ans<<endl;
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





