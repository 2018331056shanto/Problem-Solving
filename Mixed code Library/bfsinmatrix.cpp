#include<bits/stdc++.h>
using namespace std;
int vis[100][100];
char g[100][100];
int n,m;
struct P
{
	int x,y;
	void pin()
	{
		cin>>x>>y;
	}
	bool operator==(const P &b) const
    {
        if(b.x==x &&b.y==y)
			return true;
		else return false;
    }

};
int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};
bool valid(P x)
{
	cout<<x.x<<" "<<x.y<<" "<<g[x.x][x.y]<<" "<<vis[x.x][x.y]
	if(x.x>=0&&x.x<n&&x.y>=0&&x.y<m&&g[x.x][x.y]=='0'&&vis[x.x][x.y]==0)
		return true;
	else return false;
}
bool bfs(P start,P end)
{
	queue<P>q;
	q.push(start);
	vis[start.x][start.y]=1;
	while(!q.empty())
	{
		P b=q.front();
		q.pop();
		if(b==end)
			return true;
		for(int i=0;i<4;i++)
		{
			P f;
			f.x=b.x+dr[i];
			f.y=b.y+dc[i];
			if (valid(f))
			{
				q.push(f);
				vis[f.x][f.y]=1;
			}

		}
	}
	return false;
}
int main()
{
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>g[i];
	}
	P start,end;
	start.pin();
	end.pin();
	
	if(bfs(start,end))
	{
		cout<<"Reachable"<<endl;

	}
	else
	{
		cout<<"Not Reachable"<<endl;
	}
	
}
		

		