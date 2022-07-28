#include<bits/stdc++.h>
using namespace std;
void solve()
{
	bool r=false,g=false,b=false;
	string s;
	cin>>s;
	for(int i=0;i<6;i++)
	{
		if(s[i]=='r')
		{
			r=true;
		}
		else if(s[i]=='g')
		{
			g=true;
		}
		else if(s[i]=='b')
		{
			b=true;
		}
		else if(s[i]=='R')
		{
			if(r)
			{
				r=true;
			}
			else
			{
				cout<<"NO"<<endl;
				return ;
			}
		}
		else if(s[i]=='G')
		{
			if(g)
			{
				g=true;
			}
			else
			{
				cout<<"NO"<<endl;
				return ;
			}
		}
		else
		{
			if(b)
			{
				b=true;
			}
			else
			{
				cout<<"NO"<<endl;
				return ;
			}
		}
	}
	cout<<"YES"<<endl;
	return;

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