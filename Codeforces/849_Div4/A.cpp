#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string a="codeforces";
	char s;
	cin>>s;
	for(char x:a)
	{
		if(x==s)
		{
			cout<<"Yes"<<endl;
			return;
		}
	}
	cout<<"No"<<endl;

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
