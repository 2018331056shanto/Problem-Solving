#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int a[2000],b[2000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
		   cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int x=0;
		for(int i=0;i<n;i++)
		{
			a[i]=a[i]-b[i];
			x+=a[i]	;
		}
		if(x!=0)
		{
			cout<<-1<<endl;
		}
		else
		{
			std::vector<pair<int,pair<int,int>>> v;
			int size=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]>0)
				{
					size+=a[i];
				}
			}
			for(int i=0;i<n;i++)
			{
				if(a[i]>0)
				{
					for(int j=0;j<n;j++)
					{
						if(a[j]<0)
						{
							int l=abs(a[j]);
							int mn=min(l,a[i]);
							if(mn==l)
							{
								v.push_back({mn,{i+1,j+1}});
								a[i]=a[i]-mn;
								a[j]=0;
							}
							else
							{
								v.push_back({mn,{i+1,j+1}});
								a[i]=0;
								a[j]=a[j]+mn;

							}

						}
					}
				}
				
			}
			
			cout<<size<<endl;
				for(auto xx:v)
				{
					int rep=xx.first;
					for(int j=0;j<rep;j++)
					{
						cout<<xx.second.first<<" "<<xx.second.second<<endl;
					}
				}
		}

		
		
	}
}	