#include<bits/stdc++.h>
using namespace std;


void solve(){
	

	int n;
	cin>>n;
	string s;
	cin>>s;

	int ans=0;
	int dot=0;
	int tans=0;

	s+="#";
	for(int i=0;i<n;i++)


	{
		if(s[i]=='#')
		{
			continue;
		}
		if(s[i]=='.' &&s[i+1]=='.')
		{
			dot++;
		}
		else 
		{

			++dot;

			if(dot>=3)
			{
				cout<<2<<endl;
				return;
			}
			else{

				ans+=dot;
				dot=0;
			}
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
