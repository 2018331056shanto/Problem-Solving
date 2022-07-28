#include<bits/stdc++.h>
using namespace std;
long long int a[200000];
int main()
{
	//ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{  
		int mod=0;
		long long int n,m;
		memset(a,0,sizeof(a));
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			long long int x;
			cin>>x;
			long long int l=x%m;
			a[l]++;
			
		}
		int cnt=0;

		for(int i=0;i<m;i++)
		{
			if(a[i]>0)
			{
				long long int x=m-i;
				
				if(a[x]>0)
				{   cnt++;
					if(a[i]>a[x])
					{
						a[x]=0;
						a[i]=a[i]-a[x];

					}
					else if(a[i]<a[x])
					{
						a[i]=0;
						a[x]=a[x]-a[i];
					}
					else
					{
						a[i]=0;
						a[x]=0;
					}

				}
			}
		}
		for(int i=0;i<m;i++)
		{
			if(a[i]>0)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		//cout<<"mod "<<mod<<endl;
	}
}	