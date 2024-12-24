#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<int>v(105,0);
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v[x]++;
	}
	
	cout<<(is_sorted(v.begin(),v.end(),greater<>())?"Yes":"No")<<endl;
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
