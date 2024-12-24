#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	std::map<string, bool> map;

	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<s.length()-1;i++)
	{


		string temp="";
		temp=s[i];
		temp+=s[i+1];


		if(!map[temp])
		{
			// cout<<temp<<endl;
			cnt++;
			map[temp]=true;
		}
	}
	cout<<cnt<<endl;
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
