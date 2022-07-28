#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[2*10000];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];

		}
		for(int i=0;i<n;i++)
		{
			if(ar[i]>0)
			{
			   int j=i;
			   int v=ar[i];
			   if(v>j)
			   {
			   	ar[j]=1;
			   	while(j--)
			   	{
			   		//cout<<"j"<<j<<endl;
			   		ar[j]=1;
			   	}
			   }

			   else
			   {
			   	  for(int k=j;k>(j-v);k--)
			   	  {
			   	  	//cout<<"k"<<k<<endl;
			   	  	ar[k]=1;
			   	  }
			   }

			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<ar[i]<<" ";
		}
		cout<<endl;
	}
}	