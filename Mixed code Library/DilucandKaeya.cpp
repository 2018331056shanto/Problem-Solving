#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		map<pair<int,int>,int>mp;
		int d,k;
		d=k=0;
		for(auto &l:s)
		{
			l=='D'?d++:k++;
			int g=__gcd(d,k);
			int x=k/g;
			int y=d/g;
			mp[{x,y}]++;
			cout<<mp[{x,y}]<<" ";

		}
		cout<<endl;
	}
}	