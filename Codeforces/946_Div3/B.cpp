#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 
	string s; 
	cin>>s; 

	set<char>st;

	for(int i=0;i<n;i++)
	{
		st.insert(s[i]);
	}

	string ne="";

	for(auto x:st)
		ne+=x;

	// cout<<ne<<endl;

	map<char,char>mp; 

	int i=0;
	int j=ne.size()-1;

	while(i<=j)
	{
		mp[ne[i]]=ne[j];
		mp[ne[j]]=ne[i];
		i++;
		j--;
	}

	
	string ans="";
	for(auto x:s)
	{
		ans+=mp[x];
	}
	cout<<ans<<endl;



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
