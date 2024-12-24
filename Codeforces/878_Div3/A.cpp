#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;

	vector<char>v;
	int i=0;
	// int j=0;
	for(i=0;i<n;i++)
	{
		// cout<<"i :"<<i<<endl;
		char c=s[i];
		for(int j=i+1;j<n;j++)
		{
			if(c==s[j])
			{
				i=j;
				v.push_back(c);
				break;
			}
		}
	}

	for(auto x:v)
	{
		cout<<x;
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
