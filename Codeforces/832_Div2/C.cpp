#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	int mn=1e9+10;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		mn=min(mn,v[i]);
		
		/* code */
	}
	if(v[0]!=mn)
	{
		cout<<"Alice"<<endl;
	}
	else{
		cout<<"Bob"<<endl;
	}

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
