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
		int n;
		cin>>n;
		int d;
		cin>>d;
		int a[1000];
		int mn=100000;
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x<=d)
			{
				cnt++;
			}
			mn=min(x,mn);
			a[i]=x;
                   
		}
		int idx;
		int mn1=10000;
		for(int i=0;i<n;i++)
		{
			if(a[i]==mn)
			{
				idx=i;

				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(i==idx)
			{
				continue;
			}
			else
			{
				mn1=min(mn1,a[i]);
			}
		}
		//cout<<idx<<endl;
		//cout<<mn<<" "<<mn1<<endl;
		if(cnt==n||mn1+mn<=d)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}



	}
}