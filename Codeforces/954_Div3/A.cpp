#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	std::vector<int> v(3);
	cin>>v[0]>>v[1]>>v[2];

	sort(v.begin(),v.end());

	cout<<v[2]-v[0]<<endl;	
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
