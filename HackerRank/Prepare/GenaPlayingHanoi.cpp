#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	unordered_map<long long,int>mp;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x; 
		v[x-1]|=1<<i;
	}

	long long h=0;

	for(int i=0;i<4;i++)
	{
		h=(h<<10)+v[i];
	}
	


}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
