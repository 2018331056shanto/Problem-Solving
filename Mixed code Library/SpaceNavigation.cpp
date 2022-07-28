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
		int x,y;
		cin>>x>>y;
		string s;
		cin>>s;
		int l=0,r=0,u=0,d=0;
		int reql,reqr,requ,reqd;
		reql=reqr=requ=reqd=0;
		if(x<0)
		{
			x=-x;
			reql=x;
		}
		else
		{
			reqr=x;
		}
		if(y<0)
		{
			y=-y;
			reqd=y;
		}
		else
			requ=y;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='R')
			{
				r++;
			}
			else if(s[i]=='L')
			{
				l++;
			}
			else if(s[i]=='U')
			{
				u++;
			}
			else 
			{
				d++;
			}

		}
		if(l>=reql&&r>=reqr&&u>=requ&&d>=reqd)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;

	}
}