#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[2005];
int vis[2005];
int ans[2005];
int par[2005];
void bfs(int start)
{
	queue<pair<int,int>>q;
	q.push({start,1});
	vis[start]=1;
	par[start]=-1;pair<int,int>top,sc;
	while(!q.empty())
	{
		 top=q.front();
		 sc=q.front();
		q.pop();
		for(int i=0;i<v[top.first].size();i++)
		{
			if(!vis[v[top.first][i]])
			{
				vis[v[top.first][i]]=1;
				par[v[top.first][i]]=top.first;
				q.push({v[top.first][i],sc.second+1});
			}
			else if(v[top.first][i]==start)
			{
				while(start!=-1)
				{
					ans[start]=min(ans[start],sc.second);
					start=par[start];
				}
				return ;
			}
		}
	}
	ans[start]=-1;
	return ;

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<2005;i++)
	{
		ans[i]=20000;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int x;
			cin>>x;
			if(x==1)
			{
				v[i].push_back(j);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		memset(vis,0,sizeof(vis));
		memset(par,0,sizeof(par));
		bfs(i);
		if(ans[i]==-1)
		{
			cout<<"NO WAY"<<endl;
		}
		else
		{
			cout<<ans[i]<<endl;
		}
	}

}	