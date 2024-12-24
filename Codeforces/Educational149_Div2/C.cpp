#include<bits/stdc++.h>
using namespace std;


void solve(){

	string s;
	cin>>s;

	int c=-1;

	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			c=i;
		}
		else if(s[i]=='0')
		{
			c=-1;
		}
		else{

			if(c<0)
			{
				s[i]='0';
			}
			else
			{
				s[i]='1';
			}
		}
	}
	cout<<s<<endl;
	

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
