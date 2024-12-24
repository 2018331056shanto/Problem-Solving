#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	
	vector<int>v[60];
	vector<int>v1;


	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v1.push_back(x);
		v[x].push_back(i);
	}
	
cin>>s;
	// for(auto x:v1)
	// 	cout<<x<<endl;
	// cout<<s<<endl;
	for(int i=0;i<n;i++)
	{
		int x=v1[i];
		char y=s[i];
		for(int j=0;j<v[x].size();j++)
		{
			int kk=v[x][j];
			// cout<<v[x][i]<
			if(s[kk]!=s[i])
			{
				// cout<<s[kk]<<" "<<s[i]<<endl;
				cout<<"NO"<<endl;
				return;

			}
		}
	}
	cout<<"YES"<<endl;
	for(int i=0;i<60;i++)
	{
		v[i].clear();
	}
	v1.clear();
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
