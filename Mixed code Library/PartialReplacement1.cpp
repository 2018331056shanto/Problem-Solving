#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[100];
		for(int i=1;i<=n;i++)
		{
			char c;
			cin>>c;
			if(c=='*')

			{
				a[i]=1;
			}

			else
			{
				a[i]=0;
			}
		}
		int s=0,l=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i])
			{
				s=i;
				break;
			}
		}
		for(int i=n;i>=1;i--)
		{
			if(a[i])
			{
				l=i;
				break;
			}
		}
		if(s==0)
		{
			cout<<"0"<<endl;
			continue;
		}
		if(s==l)
		{
			cout<<"1"<<endl;
			continue;
		}
		int ans=2;
		int d=1,f=s;
		for(int i=s+1;i<l;i++)
		{
			if(a[i])
			{
				f=i;
			}
			if(d==k)
			{
				d=i-f;
				ans++;
			}

			d++;
		}
		cout<<ans<<endl;
	}
}	