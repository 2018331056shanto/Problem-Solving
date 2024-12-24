#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;

	map<int,int>mp;
	bool flag=false;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
		{
			flag=true;
			mp[s[i]-'0']++;
		}

	}

	if(!flag)
	{
		// cout<<"edsada"<<endl;
		cout<<"YES"<<endl;
		return;
	}

	for(int i=0;i<m-1;i++)
	{
		if(t[i]==t[i+1])
		{
			cout<<"NO"<<endl;
			return;
		}
	}

	if(mp.size()>1)
	{
		cout<<"NO"<<endl;
	}
	else{

		int temp=0;
		for(auto x:mp)
		{
			temp=x.first;
		}

		if(temp==0&&t[0]=='1'&&t[m-1]=='1')
		{
			cout<<"YES"<<endl;
		}
		else if(temp==1&&t[0]=='0'&&t[m-1]=='0')
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
