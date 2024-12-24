#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;

	set<char>st,bt;
	int p[n+1],q[n+1];

	for(int i=0;i<n;i++)
	{
		st.insert(s[i]);
		p[i]=st.size();
	}
	for(int i=n-1;i>=0;i--)
	{
		bt.insert(s[i]);
		q[i]=bt.size();
	}

	int mx=0;
	for(int i=0;i<n-1;i++)
	{
		if(i!=n-1)
		{
			mx=max(mx,p[i]+q[i+1]);
		}
		else
		{
			mx=max(mx,p[i-1]+1);
		}
	}
	cout<<mx<<endl;
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
