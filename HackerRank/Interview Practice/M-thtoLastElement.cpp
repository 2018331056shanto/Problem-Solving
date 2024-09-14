#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	std::vector<int> v;
	v.push_back(-10);
	int x;
	while(cin>>x)
	{
		v.push_back(x);
	}

	int sz=v.size();
	if((sz-n)<1)
	{
		cout<<"NIL"<<endl;
	}
	else{
		cout<<(v[sz-n])<<endl;
	}


}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
