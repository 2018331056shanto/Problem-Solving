	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		string s;
		cin>>s;
		int first=s[0]-'a';
		int second=s[1]-'a'+1;
		if(second>first)
		{
			cout<<first*26+second-first-1<<endl;
		}
		else
		{
			cout<<first*26+second-first<<endl;
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