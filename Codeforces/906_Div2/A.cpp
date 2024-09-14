#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;

	map<int,int>mp;

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		mp[x]++;
	}

	if(n<=2)
	{
		cout<<"YES"<<endl;
		return;
	}


	if(mp.size()==1)
	{
		cout<<"YES"<<endl;
	}
	else if(mp.size()>2)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		vector<int>v;

		for(auto l:mp)
		{
			v.push_back(l.second);
		}

		if(abs(v[0]-v[1])<=1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}


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
