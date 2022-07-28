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
		int od=1;
		int ev=2;
		int a[102][102]={0};
		if(n==1)
		{
			cout<<1<<endl;
		}
		else if(n==2)
		{
			cout<<-1<<endl;
		}
		else
		{
			for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{

				if(od<=n*n)
				{
					a[i][j]=od;
					od+=2;
				}
				else
				{
					a[i][j]=ev;
					ev+=2;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		}
		
	}
}	