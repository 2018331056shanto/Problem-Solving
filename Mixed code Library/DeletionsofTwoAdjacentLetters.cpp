#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	string s1;
	cin>>s1;
	bool flag=false;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==s1[0]&&i%2==0)
		{
			flag=true;
			break;
		}
	}
	cout<<(flag?"YES":"NO")<<endl;
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