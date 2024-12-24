	#include<bits/stdc++.h>
	using namespace std;

	void solve()
	{
		int n,l=-1,x=0,y=0;
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i+=2)
		{
			if(s[i]!=s[i+1])
			{
				x+=1;
			}
			else
			{
				if(l!=s[i])
				{
					y+=1;

				}
				l=s[i];
			}
		}
		cout<<x<<" "<<max(y,1)<<endl;
		// cout<<x<<endl;
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