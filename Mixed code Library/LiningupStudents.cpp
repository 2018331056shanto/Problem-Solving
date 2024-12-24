#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	int x=1;
	while(t--)
	{
		cout<<"Case "<<x<<": ";
		x++;
		int a[100009];
		int n;
		int cntb=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];

		}int pos=1;
		int k=0;
		for(int i=2;i<=n;i++)
		{
			if(a[1]<a[i])
			{
				pos++;
				k=i;
			}
			  else
			{
				break;
			}
		}
		if(n==1)
		{
			cout<<1<<endl;
		}
		else
		{
			
			cout<<k<<endl;
		for(int i=k;i<=n;i++)
		{
			if(i-a[i]==1)
			{
				pos++;
			}
		}
		cout<<pos<<endl;
		}
		
	}
}	