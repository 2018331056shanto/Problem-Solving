#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k; 
	cin>>n>>k;

	unordered_map<int,int>mp;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x; 

		mp[x]++;
	}

	for(auto x:mp)
	{
		if(x.second>=k)
		{
			cout<<k-1<<endl;
			return ;
		}
	}

	cout<<n<<endl;

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
