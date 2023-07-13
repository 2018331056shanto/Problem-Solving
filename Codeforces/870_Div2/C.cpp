#include<bits/stdc++.h>
using namespace std;

int sol(vector<int>grid[],vector<vector<int>>&dp,int x,int y,int n)
    {
         int xx[8]={1,-1,0,0,1,1,-1,-1};
          int yy[8]={0,0,1,-1,1,-1,1,-1};
       

        

        if(dp[x][y]!=INT_MAX)
        {
            return dp[x][y];
        }

        int res=n*n;
        for(int i=0;i<8;i++)
        {
        	int nx=x+xx[i];
        	int ny=y+yy[i];
        	if((nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]==0))
           		res=res+sol(grid,dp,x+xx[i],y+yy[i],n);
            
        }
        
        return dp[x][y]=min(res,dp[x][y]);







    }

void solve(){
	
	int n;
	cin>>n;
	vector<int>grid[n];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			grid[i].push_back(x);
		}
	}
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		cout<<grid[i][j]<<" ";
			

	// 	}
	// 	cout<<endl;
	// }

        vector<vector<int>>dp(n+1,vector<int>(n+1,INT_MAX));

        sol(grid,dp,0,0,n);	
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
