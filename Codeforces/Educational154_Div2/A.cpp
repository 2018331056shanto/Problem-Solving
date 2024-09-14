#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string s;
	cin>>s;

	bool is3first=false;
	bool is7first=false;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='3')
		{
			is3first=true;
			break;
		}
		if(s[i]=='7')
		{
			is7first=true;
			break;
		}
	}

	if(is3first)
	{
		cout<<37<<endl;
	}
	else{
		cout<<73<<endl;
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
