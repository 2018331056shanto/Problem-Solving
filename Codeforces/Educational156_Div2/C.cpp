#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	string s;
	cin>>s;
	int n;
	cin>>n;

	stack<pair<int,int>>st;
	string ans=s;
	st.push({s[0]-'a',0});
	// int i=1;
	for(int i=1;i<s.length();i++)
	{
		// cout<<i<<endl;
		while(!st.empty())
		{
			int ft=st.top().first;

			if(ft>=(s[i]-'a'))
			{
				// cout<<ft<<" "<<s[i]-'a'<<endl;
				ans+=s.erase(st.top().second,1);
				--i;
				st.pop();
				
				// cout<<ans<<" "<<ft<<endl;
				// cout<<ans<<endl;

			}
			else
			{
				break;
			}

		}
		// cout<<"add "<<s[i]<<endl;
		st.push({s[i]-'a',i});

	}
	// cout<<st.top().second<<endl;
	while(!st.empty())
	{
		int id=st.top().second;
		ans+=s.erase(id,1);
		st.pop();
	}
// ans+=s.erase(st.top().second);
	// cout<<ans<<endl;
cout<<ans[n-1];
	
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
