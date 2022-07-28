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
		cin>>n;
		string s;
		cin>>s;
		string ss=s;
		sort(ss.begin(),ss.end());
		if(ss[0]=='?'&&ss[n-1]=='?')
		{
			char a='B';
			char b='R';
			for(int i=1;i<=n;i++)
			{
				cout<<a;
				++i;
				if(i>n)
					break;
				cout<<b;
			}
			cout<<endl;
		}
		else
		{
			if(s[0]=='?')
		{
			int cnt=0;
			char s1;
			//cout<<"fuck";
			for(int i=1;i<n;i++)
			{
				cnt++;
				if(s[i]!='?')
				{
					s1=s[i];
				//	cout<<s1<<endl;
					break;
				}

			}
			//cout<<cnt<<endl;
			if(cnt%2)
			{
				if(s1=='R')
				{
					s[0]='B';
				}
				else
				{
					s[0]='R';
				}
			}
			else
			{
				s[0]=s1;
			}
		}
		
		for(int i=1;i<n;i++)
		{
			if(s[i]=='?')
			{
				if(s[i-1]=='R')
				{
					s[i]='B';
				}
				else
				{
					s[i]='R';
				}
			}

		}
		cout<<s<<endl;
		}
		
	}
}	