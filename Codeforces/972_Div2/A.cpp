#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n; 

	string s ="aeiou";

	if(n<=5)
	{
		cout<<s.substr(0,n)<<endl;
	}
	else
	{
		string ans="";
		map<char,int>mp;
		int idx=0;
		int mod=n;
		while(n--)
		{
			mp[s[idx]]++;

			idx++;
			idx%=5;
		}

		for(auto [x,y]:mp)
		{
			for(int i=0;i<y;i++)
			{
				ans+=x;
			}
		}
		cout<<ans<<endl;
		
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
