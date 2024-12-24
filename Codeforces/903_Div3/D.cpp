#include<bits/stdc++.h>
using namespace std;

void prime_factor(int x,map<int,int>&mp)
{
	int i=2;
	while(i*i<=x)
	{
		while(x%i==0)
		{
			mp[i]++;
			x/=i;
		}
		i++;
	}
	if(x>1)
	{
		mp[x]++;
	}
}

void solve(){
	
	map<int,int>mp;
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		prime_factor(x,mp);
	}
	
	for(auto x:mp)
	{
		if(x.second%n!=0)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;

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
