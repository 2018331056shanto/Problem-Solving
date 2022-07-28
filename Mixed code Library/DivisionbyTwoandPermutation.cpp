#include<bits/stdc++.h>
using namespace std;
int vis[60];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		memset(vis,0,sizeof(vis));
		int n;
		cin>>n;
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			int x=v[i];
			if(x<=n&&vis[x]==0)
			{
				vis[x]=1;
				continue;
			}
			else
			{
				while(x>0)
				{
					x/=2;
					if(x<=n&&vis[x]==0)
					{
						vis[x]=1;
						break;
					}
				}

			}


		}
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			if(vis[i]==1)
			{
				cnt++;
			}
		}
		if(cnt==n)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;

		}
		

	}	
	
}