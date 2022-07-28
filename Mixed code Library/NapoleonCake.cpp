#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[20100];
		memset(ar,0,sizeof(ar));
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(int i=n-1;i>=0;i--)
		{
			//cout<<i<<endl;
		
			int j;
			//cout<<i<<endl;
			if(ar[i]>0)
			{
				int k=i;
				j=ar[k];
				while(j>0)
				{

					ar[i]=1;
					if(i==0)
						break;
					i--;
				    j--;
				}
				//cout<<"in"<<i<<endl;
				if(i==0)
				{
                   i=i;
				}
				else
				{
					i++;
				}
				
			}
			//cout<<i<<endl;

			
		}
		for(int i=0;i<n;i++)
		{
			cout<<ar[i]<<" ";
		}
		cout<<endl;
	}
}	