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
		int n,k;
		cin>>n>>k;
		int a[100000],b[10000];
		if(n==k)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else
		{
			 vector<int>v,v1;

			 int l=n-k+1;
			 int p=k;

			 while(l--)
			 {
			 	v.push_back(k);
			 	k--;

			 }
               if(v.size()==p)
               {
               	for(int i=0;i<v.size();i++)
               	{
               		cout<<v[i]<<" ";
               	}
               	cout<<endl;
               }
               else
               {
               	for(int i=1;i<=k;i++)
               	{
               		cout<<i<<" ";
               	}
               	for(int i=0;i<v.size();i++)
               	{
               		cout<<v[i]<<" ";
               	}
               	cout<<endl;
               }
			 
		}
	}
}