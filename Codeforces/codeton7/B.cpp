#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;

	string s;
	cin>>s;
	
	int lastA=n-1;	
	bool flag=false;	
	int ans=0;
	int x=0;
	for(int i=s.length()-1;i>=0;i--)
	{

		if(s[i]=='B')
		{
			flag=true;
		}

		if(flag&&s[i]=='A')
		{
			ans+=(lastA-i);
			lastA=i;
		}
		else if(!flag)
		{
			lastA--;
		}
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
