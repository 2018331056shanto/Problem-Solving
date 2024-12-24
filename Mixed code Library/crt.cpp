#include<bits/stdc++.h>
using namespace std;
#define ll long long
std::vector<pair<ll,ll>> v;
ll modI(ll a,ll m)
{
	ll m0=m,y=0,x=1;
	if(m==1)
	{
		return 0;
	}
	while(a>1)
	{
		ll q=a/m;
		ll t=m;
		m=a%m;
		a=t;
		t=y;
		y=x-q*y;
		x=t;
	}
	if(x<0)
	{
		x+=m0;
	}
	return x;
}
ll crt()
{
	ll ans=0;
	ll n=v.size();
	ll m=1;
	for(int i=0;i<n;i++)
	{
		m*=v[i].first;

	}
	for(int i=0;i<n;i++)
	{
		int t=1;
		for(int j=0;j<i;j++)
		{
			t*=v[j].first;
			t*=modI(v[j].first,v[i].first);
			t%=m;
		}
		ans+=(t*(v[i].second+m-ans))%m;
		ans%=m;

	}
	return ans;
}

int main()
{
	ll n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	ll ans=crt();
	cout<<ans<<endl;
	
}	