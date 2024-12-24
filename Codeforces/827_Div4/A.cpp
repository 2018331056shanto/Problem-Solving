#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	vector<int>v;
	for(int i=0;i<3;i++)
	{

		int x;
		cin>>x;
		v.push_back(x);
	}

	sort(v.begin(),v.end());
	// for(auto l:v)
	// 	cout<<l<<endl;
	if(v[0]+v[1]==v[2])
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

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
