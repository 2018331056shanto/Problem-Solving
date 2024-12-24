#include<bits/stdc++.h>
using namespace std;

// 1-1 0 0 1-1 1 -1
// 0 0 1-1 1 1-1 -1
	int n,m;
vector<vector<int>>direction{{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};


void dfs(vector<vector<int>>&v,vector<vector<int>>&visited,int i,int j,int &region)
{
	visited[i][j]=1;

	for(int k=0;k<8;k++)
	{
		int x=i+direction[k][0];
		int y=j+direction[k][1];

		if(x>=0&&x<n&&y>=0&&y<m&&!visited[x][y]&&v[x][y])
		{
			region++;
			dfs(v,visited,x,y,region);
		}
	}
	// if()
}
void solve(){
	

	cin>>n>>m; 


	std::vector<vector<int>> v(n,vector<int>(m));

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>v[i][j];
		}
	}

	std::vector<vector<int>> visited(n,vector<int>(m));

	int ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(!visited[i][j]&&v[i][j])
			{
				int region=1;
				dfs(v,visited,i,j,region);

				ans=max(ans,region);
			}
		}
	}

	cout<<ans<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
