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
		int a[20000];
		int x=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			x^=a[i];
		}
		int prex=a[0];
		bool flag=false;
		if(x==0)
		{
			cout<<"YES"<<endl;

		}
		else
		{
			for(int i=1;i<n;i++)
		{
			int midx=a[i];
			for(int j=i+1;j<n;j++)
			{
				if(prex==midx&&midx==x)
				{
					flag=true;
					break;
				}
				if(flag)
				{
					break;
				}
				midx^=a[j];
			}
			prex^=a[i];

		}
		if(flag)
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