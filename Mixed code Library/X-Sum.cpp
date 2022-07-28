	#include<bits/stdc++.h>
	using namespace std;
	int dx[]={1,1,-1,-1};
	int dy[]={1,-1,1,-1};
	void solve()
	{
		int n,m;
		cin>>n>>m;
		int ar[205][205];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>ar[i][j];
			}
		}
		
		long long ans=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				long long sum=ar[i][j];
				for(int k=0;k<4;k++)
				{
					int x=i+dx[k];
					int y=j+dy[k];
					while(0<=x&&x<n&&0<=y&&y<m)
					{
						sum+=ar[x][y];
						x+=dx[k];
						y+=dy[k];
					}
				}
				ans=max(sum,ans);
			}


		}
		cout<<ans<<endl;
		
	
	}

	int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}