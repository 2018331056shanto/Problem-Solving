#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	// multiset<char>mst;
	// for(int i=0;i<s.size();i++)
	// {
	// 	char  x=s[i];
	// 	mst.insert(x);
	// }
	// int idx=0;
	// for(int i=0;i<s.size();i++)
	// {
	// 	char x=s[i];
	// 	int cnt=mst.count(x);
	// 	if(cnt>1)
	// 	{
	// 		mst.erase(mst.find(x));
	// 	}
	// 	else
	// 	{
	// 		idx=i;
	// 		break;
	// 	}
	// }
	// for(int i=idx;i<s.size();i++)
	// {
	// 	cout<<s[i];
	// }
	// cout<<endl;
	map<char,int>mp;
	for(int i=0;i<s.size();i++)
	{
		char x=s[i];
		mp[x]++;
	}
	int idx=0;
	for(int i=0;i<s.size();i++)
	{
		char x=s[i];
		if(mp[x]>1)
		{
			mp[x]--;
		}
		else
		{
			idx=i;
			break;
		}

	}
	for(int i=idx;i<s.size();i++)
	{
		cout<<s[i];
	}
	cout<<endl;


}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	