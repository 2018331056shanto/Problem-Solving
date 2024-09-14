#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string s;
	string b="abcdefghijklmnopqrstuvwxyz";

	int n;
	cin>>n>>s;

	std::vector<int>cnt(27,0);

	int mx=0;
	for(int i=0;i<n;i++)
	{
		cnt[s[i]-'a']++;
		mx=max(mx,cnt[s[i]-'a']);
	}	


	while(mx--)
	{
		for(int i=0;i<26;i++)
		{
			if(cnt[i]!=0)
			{
				cnt[i]--;
				cout<<b[i];
			}
		}
	}

	cout<<endl;

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


