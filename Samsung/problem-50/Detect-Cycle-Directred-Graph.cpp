#include<iostream>
#include<utility>
#include<vector>
#include<queue>
#include<climits>
#include<algorithm>


using namespace std;

#define MAX 100

int n,m;
std::vector<int>adj[MAX];

vector<int>tmp;
int ans=INT_MAX;

void bfs(int x,vector<int>&vis,vector<int>&par,vector<int>&dis)
{
	vis[x]=1;
	dis[x]=0;

	queue<int>q;
	q.push(x);

	while(!q.empty())
	{
		int t=q.front();
		q.pop();

		for(int i=0;i<adj[t].size();i++)
		{
			int nextT=adj[t][i];

			if(!vis[nextT])
			{
				par[nextT]=t;
				vis[nextT]=1;
				dis[nextT]=dis[t]+1;
				q.push(nextT);
			}
		}
	}

	for(int i=1;i<=n;i++)
	{
		if(i==x)
		{
			continue;
		}

		for(int j=0;j<adj[i].size();j++)
		{
			if(adj[i][j]==x)
			{
				if(ans>dis[i]+1&&vis[i])
				{
					ans=dis[i]+1;
					tmp.clear();
					tmp.push_back(x);
					for(int k=i;k!=x;k=par[k])
						tmp.push_back(k);
				}
			}
		}
	}
}

void solve()
{

	cin>>n>>m;

	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;

		adj[x].push_back(y);
	}

	for(int i=1;i<=n;i++)
	{
		vector<int>vis(n+1,0);
		vector<int>par(n+1,-1);
		vector<int>dis(n+1,INT_MAX);
		bfs(i,vis,par,dis);
	}

	sort(tmp.begin(),tmp.end());

	for(auto x:tmp)
		cout<<x<<" ";
	cout<<endl;
}

int main()
{
	solve();
}


/*
5 6

0 1
2 1
2 3
3 4
4 2
4 0

*/
