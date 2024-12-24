	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		string s;
		cin>>s;
		if(s.size()==1||s[s.size()-1]!='B'||s[0]=='B')
		{
			cout<<"NO"<<endl;
			return;
		}
		int cntB=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='B')
			{
				cntB++;
			}
			if((i+1-cntB)<cntB)
			{
				cout<<"NO"<<endl;
				return;
			}

		}
		cout<<"YES"<<endl;


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