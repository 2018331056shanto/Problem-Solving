#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;
	map<long long, int>mp;
	map<long long,long long>last;
	long long l;
	for(int i=0;i<n;i++)
	{
		char c;
		long long x;
		cin>>c>>x;
		if(c=='+')
		{
			mp[x]++;
		}
		else if(c=='?')
		{
			l=last[x];
			while(true)
			{
				l+=x;
				if(!mp[l])
				{
					cout<<l<<endl;
					last[x]=l-x;
					break;
				}
			}	
		}

	}
	// for(auto y:mp)
	// 	cout<<y.first<<endl;
	

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
