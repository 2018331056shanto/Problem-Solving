#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	int t=0;
	long long int ans=0;

	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='>')
		{
			t+=1;
			ans+=t;
		}
		else
		{
			t=0;
		}
	}
	cout<<ans<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
