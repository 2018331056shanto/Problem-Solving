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
		double  mn=1e7;
		double mx=-1;
		for(int i=0;i<n;i++)
		{
			double x;
			cin>>x;
			mn=min(x,mn);
			mx=max(x,mx);
		}
		int x=ceil((mx-mn)/2);
		int m=mn+x;
		int p=(mx-(x*2));
		cout<<x<<endl;
		bool flag=false;
		if(mx==mn)
		{
			cout<<"You are not too lazy"<<endl;
		}
		else
		{
				while(p<=m)
				{
					if(m==p)
					{
						flag=true;
						break;
					}
					m--;
					p+=2;

				}
				if(flag)
				{
					cout<<"Yes"<<endl;
				}
				else
				{
					cout<<"You are a looser"<<endl;
				}
		}
	
	}
}	