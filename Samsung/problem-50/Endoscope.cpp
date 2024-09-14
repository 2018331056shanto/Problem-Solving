//https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/endoscope

#include<iostream>
#include<utility>
#include<vector>
#include<climits>
#include<queue>


using namespace std;

struct node
{
	bool left,right,up,down;	
};

struct point{

	int x,y;
};


int n,m,sx,sy,len;

const int mx=1005;
int arr[mx][mx],vis[mx][mx],dis[mx][mx];
int ans;

node pipes[mx][mx];

bool isVal(int i,int j)
{
	return(i>=0&&i<n&&j>=0&&j<m);
}

void bfs()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			vis[i][j]=0;
			dis[i][j]=0;
		}
	}

	queue<pair<int,int>>qq;

	vis[sx][sy]=1;
	dis[sx][sy]=1;
	  if(arr[sx][sy]==0){
        ans=0;
        return;
    }
	qq.push({sx,sy});


	while(!qq.empty())
	{
		pair<int,int>u=qq.front();
		qq.pop();

		int p=u.first;
		int q=u.second;

		if(1+dis[p][q]<=len)
		{
			if(isVal(p+1,q)&&!vis[p+1][q]&&pipes[p+1][q].up&&pipes[p][q].down)
			{
				vis[p+1][q]=1;
				dis[p+1][q]=1+dis[p][q];
				ans++;

				qq.push({p+1,q});
			}

			if(isVal(p-1,q)&&!vis[p-1][q]&&pipes[p-1][q].down&&pipes[p][q].up)
			{
				vis[p-1][q]=1;
				dis[p-1][q]=1+dis[p][q];
				ans++;

				qq.push({p-1,q});
			}

			if(isVal(p,q+1)&&!vis[p][q+1]&&pipes[p][q+1].left&&pipes[p][q].right)
			{
				vis[p][q+1]=1;
				dis[p][q+1]=1+dis[p][q];
				ans++;

				qq.push({p,q+1});
			}

			if(isVal(p,q-1)&&!vis[p][q-1]&&pipes[p][q-1].right&&pipes[p][q].left)
			{
				vis[p][q-1]=1;
				dis[p][q-1]=1+dis[p][q];
				ans++;

				qq.push({p,q-1});
			}


		}
		
	}
}

void solve()
{
	ans=1;


	cin>>n>>m>>sx>>sy>>len; 



	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];


			if(arr[i][j]==1)
			{
				pipes[i][j].left=true;
				pipes[i][j].right=true;
				pipes[i][j].up=true;
				pipes[i][j].down=true;
			}
			else if(arr[i][j]==2)
			{
				pipes[i][j].left=false;
				pipes[i][j].right=false;
				pipes[i][j].up=true;
				pipes[i][j].down=true;
			}
			else if(arr[i][j]==3)
			{
				pipes[i][j].left=true;
				pipes[i][j].right=true;
				pipes[i][j].up=false;
				pipes[i][j].down=false;
			}
			else if(arr[i][j]==4)
			{
				pipes[i][j].left=false;
				pipes[i][j].right=true;
				pipes[i][j].up=true;
				pipes[i][j].down=false;
			}
			else if(arr[i][j]==5)
			{
				pipes[i][j].left=false;
				pipes[i][j].right=true;
				pipes[i][j].up=false;
				pipes[i][j].down=true;
			}
			else if(arr[i][j]==6)
			{
				pipes[i][j].left=true;
				pipes[i][j].right=false;
				pipes[i][j].up=false;
				pipes[i][j].down=true;
			}
			else if(arr[i][j]==7)
			{
				pipes[i][j].left=true;
				pipes[i][j].right=false;
				pipes[i][j].up=true;
				pipes[i][j].down=false;
			}
			else
			{
				pipes[i][j].left=false;
				pipes[i][j].right=false;
				pipes[i][j].up=false;
				pipes[i][j].down=false;
			}
		}
	}	
	bfs();
	cout<<ans<<endl;
	


}

int main()
{
	int t;
	cin>>t; 
	while(t--)
	{
		solve();
		
	}
}