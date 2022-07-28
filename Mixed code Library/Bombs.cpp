#include<bits/stdc++.h>
using namespace std;
int v[1010][1010];
int vis[1010][1010];
int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};
int cost[1010][1010];
int startX,startY,endX,endY;
int row,col;
void bfs(int startX,int startY)
{
	//cout<<endX<<endY<<endl;
	//cout<<"hi"<<endl;
	queue<pair<int,int>>q;
	vis[startX][startY]=1;
	q.push({startX,startY});
	while(!q.empty())
	{
		//cout<<"hello"<<endl;
		int flag=0;
		int sx=q.front().first;
		int sy=q.front().second;
		q.pop();
		for(int i=0;i<4;i++)
		{
			int snx,sny;
			snx=sx+dr[i];
			sny=sy+dc[i];
			if(!vis[snx][sny]&&snx>=0&&sny>=0)
			{
				//cout<<"mom"<<endl;
				if(snx<row&&sny<col&&v[snx][sny]!=1)
				{
					vis[snx][sny]=1;
					q.push({snx,sny});

					cost[snx][sny]=cost[sx][sy]+1;
					//cout<<snx<<" "<<sny<<endl;
					//cout<<cost[sx][sy]<<endl;
				}
			}

			if(snx==endX&&sny==endY)
			{
				//cout<<"helo bro"<<endl;
				flag=1;
				cout<<cost[snx][sny]<<endl;
				break;
			}
			
		}if(flag)
			{
				break;
			}
	}

}
void init()
{
	for(int i=0;i<1010;i++)
	{
		for (int j = 0; j < 1010; ++j)
		{
			vis[i][j]=0;
			
			v[i][j]=0;
			cost[i][j]=0;
			/* code */
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	while(cin>>row>>col)
	{
		init();
		// cout<<"hi"<<endl;
		int n;
		
		
		if(row==0&&col==0)
		{
			return 0;
		}
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int rowName,numBomb;
			cin>>rowName>>numBomb;
			
			for(int j=0;j<numBomb;j++)
			{
				
				int x;
				cin>>x;
				
				v[rowName][x]=1;
				
			}
		}
	
		cin>>startX>>startY>>endX>>endY;
		bfs(startX,startY);
		//cout<<double(dp[row-1][col-1])/2+1<<endl;
		

	}	
	
}