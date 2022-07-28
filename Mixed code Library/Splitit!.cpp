#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		bool flag=true;
		if(k==0)
		{
			cout<<"YES"<<endl;

		}
		else
		{
			for(int i=0;i<k;i++)
			{
				if(s[i]==s[n-i-1])
				{
					continue;
				}
				else
				{
					flag=false;
					break;
				}
			}
			if(flag&&2*k<n)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}

		}
	}
}	