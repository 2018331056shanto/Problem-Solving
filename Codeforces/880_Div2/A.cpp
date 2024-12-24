#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	vector<pair<int,int>>mp;

	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]==0)
		{
			mp.push_back({0,0});
		}
	}
	sort(v.begin(),v.end());
	
	for(int i=0;i<n;i++)
	{
		if(v[i]==0)
			continue;

		bool flag=false;
		for(int j=0;j<mp.size();j++)
		{
			auto f=mp[j];

			if(abs(v[i]-f.second)==1)
			{
				int temp=f.second;

				mp[j]={0,temp+1};
				flag=true;
				break;
			}

		}
		if(!flag)
		{
			cout<<"No"<<endl;
			return;
		}
	}
	
	cout<<"Yes"<<endl;
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


