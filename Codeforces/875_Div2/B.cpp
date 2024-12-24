#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	cin>>n;

	vector<int>a(n),b(n);

	for(int i=0;i<n;i++){

		cin>>a[i];
	
	}

	for(int i=0;i<n;i++)
	{

		cin>>b[i];
		
	}
	map<int,int>mp1,mp2;

	for(int i=0;i<n;i++)
	{
		int j=i;
		while(j<n-1&&a[j]==a[j+1])
		{
			j++;

		}
		mp1[a[j]]=max(mp1[a[j]], j-i+1);

		i=j;
	}

	for(int i=0;i<n;i++)
	{
		int j=i;
		while(j<n-1&&b[j]==b[j+1])
		{
			j++;

		}
		mp2[b[j]]=max(mp2[b[j]], j-i+1);
		i=j;
	}
	int ans=0;
	
	for(auto [i,x]:mp1)
	{
		ans=max(ans,mp2[i]+x);
	}
	for(auto [i,x]:mp2)
	{
		ans=max(ans,mp1[i]+x);
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
