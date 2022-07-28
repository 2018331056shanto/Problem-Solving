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
		int a[1000];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>k)
			{
				
				a[i]=a[i]-k;
				a[n-1]=a[n-1]+k;
				break;

			}
			else
			{
				
				int x=a[i];
				a[i]=0;
				k=k-x;
				
				a[n-1]=a[n-1]+x;
				
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}	