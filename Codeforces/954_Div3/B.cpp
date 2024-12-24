#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;
	cin>>n>>m; 

	std::vector<vector<int>> v(n,vector<int>(m));

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>v[i][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		int mx=0;
		for(int j=0;j<m;j++)
		{
			bool flag=true;
			int mx=0;
			if(i+1<n)
			{
				if(v[i][j]<=v[i+1][j])
				{
					flag=false;
				}
				else
				{
					mx=max(mx,v[i+1][j]);
				}


			}
			if(j+1<m)
			{
				if(v[i][j]<=v[i][j+1])
				{
					flag=false;
				}
				else
				{
					mx=max(mx,v[i][j+1]);
				}
			}

			if(i-1>=0)
			{
				if(v[i][j]<=v[i-1][j])
				{
					flag=false;
				}
				else
				{
					mx=max(mx,v[i-1][j]);
				}


			}
			if(j-1>=0)
			{
				if(v[i][j]<=v[i][j-1])
				{
					flag=false;
				}
				else
				{
					mx=max(mx,v[i][j-1]);
				}
			}
			if(flag)
			{
				v[i][j]=mx;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}

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
