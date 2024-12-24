#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k;
	int ans=0;
	std::vector<int> v(k);
	
	for(int i=0;i<k;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());

	int segment_division=0;

	for(int i=0;i<k-1;i++)
	{
		if(v[i]==1)
			continue;
		segment_division+=v[i]-1;
	}

	cout<<segment_division+(k+segment_division)-1<<endl;
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
