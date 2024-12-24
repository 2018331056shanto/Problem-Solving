#include<bits/stdc++.h>
using namespace std;
int avail[200000];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		double n,m;
		cin>>n>>m;
		memset(avail,0,sizeof(avail));
		for(int i=0;i<m;i++)
		{
			int k;
			cin>>k;
			for(int i=0;i<k;i++)
			{
				int x;
				cin>>x;
				avail[x]++;
			}
		}
		int h=ceil(m/2);
		int ans=0;
		for(int i=0;i<=n;i++)
		{
		
				if(avail[i]>=h)
				{
					ans+=h;
					//avail[i]=avail[i];
					//cout<<avail[i]<<endl;
				}
				else
				{
					ans+=avail[i];
					//cout<<avail[i]<<endl;

					//avail[i]=-1;
				}
			

		}
		int cnt=0;
		// for(int i=0;i<=n;i++)
		// {
		// 	cout<<avail[i];
		// }
		// cout<<endl;
		// cout<<ans<<endl;
		if(ans>=m)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<=n;i++)
			{
				if(avail[i]>0)
				{
					if(avail[i]>=h)
					{
						for(int j=0;j<h;j++)
						{
							if(cnt==m)
								break;
							cout<<i<<" ";
							cnt++;
						}
					}
					else
					{
						for(int j=0;j<avail[i];j++)
						{
							if(cnt==m)
								break;
							cout<<i<<" ";
							cnt++;
						}
					}
				}

			}
			cout<<endl;

		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}	