#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s; 

	std::vector<int> v;

	bool flag=false;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0'&&!flag)
		{
			v.push_back(s[i]-'0');
			flag=true;
		}
		else if(s[i]=='1')
		{
			v.push_back(s[i]-'0');
			flag=false;
		}
	}
	int cnt1=0;

	for(auto x:v)
	{
		if(x==1)
		{
			cnt1++;

		}
	}

	if(cnt1>(v.size()-cnt1))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	// cout<<endl;
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
