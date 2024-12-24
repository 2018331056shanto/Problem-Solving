#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string s;
	int n;
	cin>>n;
	cin>>s;
	
	int x=0,y=0;
	int p=0,q=0;
	
	for(int i=0;i<s.length();i++)
	{

		if(s[i]=='<')
		{
			
			x++;
			y=max(x,y);
			p=0;
			
		}
		else if(s[i]=='>')
		{
			p++;
			q=max(p,q);
			x=0;
					}
	}	
	
	cout<<max(q,y)+1<<endl;
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
