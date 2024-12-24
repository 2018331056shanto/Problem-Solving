	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{

			if(s[i]=='a'&&s[i+1]=='a')
			{
				continue;
			}
			else if(s[i]=='a'&&s[i-1]=='a'&&i!=0)
			{
				
				
					continue;
				
			}
			else if(s[i]=='b')
			{
				continue;
			}
			else
			{
				// cout<<i<<endl;
				cout<<"NO"<<endl;
				return ;
			}
		}
		for(int i=0;i<s.size();i++)
		{

			if(s[i]=='b'&&s[i+1]=='b')
			{
				continue;
			}
			else if(s[i]=='b'&&s[i-1]=='b'&&i!=0)
			{
				
					continue;
				
			}
			else if(s[i]=='a')
			{
				continue;
			}
			else
			{
				// cout<<"hello i "<<i<<endl;
				cout<<"NO"<<endl;
				return ;
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