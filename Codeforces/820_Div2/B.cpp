	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{

		int n;
		cin>>n;
		string ans,s;
		cin>>s;
		const int ll=96;
		int i=n-1;
		while(i>=0)
		{
			if(s[i]!='0')
			{
				int x=(int)s[i]-48;
				char c=(char)(x+96);
				string ss(1,c);
				ans.append(ss);
				i--;
				// cout<<ss<<endl;
			}
			else{
				
				int x=(int)s[i-2]-48;
				int y=(int)s[i-1]-48;
				int xx=x*10+y;
				char c=(char)(xx+96);
				string ss(1,c);
				ans.append(ss);
				i-=3;

			}

		}
	reverse(ans.begin(),ans.end());
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