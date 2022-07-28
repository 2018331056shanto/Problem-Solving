#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.size();i+=2)
		{
			if(s[i]!='a')
			{
				s[i]='a';
			}
			else
			{
				s[i]='b';

			}
			if(s[i+1]!='z')
			{
				s[i+1]='z';
			}
			else
			{
				s[i+1]='y';
			}
			
		}
		cout<<s<<endl;
	}
}