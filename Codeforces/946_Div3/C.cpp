#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];

	map<pair<int,int>,int>m1,m2,m3;

	map<array<int,3>,int>m4;
	long long ans=0;

	for(int i=0;i<n-2;i++)
	{
		int x=v[i],y=v[i+1],z=v[i+2];

		ans+=m1[{x,y}],m1[{x,y}]++;
		ans+=m2[{x,z}],m2[{x,z}]++;
		ans+=m3[{y,z}],m3[{y,z}]++;

		ans-=m4[{x,y,z}]*3;
		m4[{x,y,z}]++;
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
