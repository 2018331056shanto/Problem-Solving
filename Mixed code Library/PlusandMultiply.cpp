#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		if(a==1)
		{
			if((n-1)%b==0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			long long x=1;
			bool flag=false;
			while(x<=n)
			{
				
				if((n-x)%b==0)
				{
					flag=true;
					break;

				}
				x*=a;

			}
			if(flag)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
}	