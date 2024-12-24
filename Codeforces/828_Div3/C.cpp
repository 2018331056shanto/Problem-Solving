#include<bits/stdc++.h>
using namespace std;


void solve(){

	int n;
	char c;
	cin>>n>>c;
	string s;
	cin>>s;
	
	string ss=s+s;
	int mx=0,t=0;
	for(int i=0;i<ss.size();i++)
	{
		if(ss[i]==c)
		{
			t=0;
			while(i<ss.size())
			{
				t++;
				if(ss[i]=='g')
					break;
				else i++;
			}
			mx=max(mx,t);
		}
	}
	cout<<mx-1<<endl;

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
