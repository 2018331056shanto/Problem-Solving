#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[10000];
int vis[10100];
set<int>at;
int low[10000];
int dis[10000];
int l=0;
void dfs(int child,int parent)
{
	int children=0;
	vis[child]=1;
	l++;
	low[child]=l;
	dis[child]=l;
	for(int i=0;i<v[child].size();i++)
	{
		if(v[child][i]==parent)
		{
			continue;
		}
		if(!vis[v[child][i]])
		{
			dfs(v[child][i],child);
			children++;

			if(dis[child]<=low[v[child][i]]&&parent!=-1)
			{
				//cout<<"child "<<child<<endl;

				//cout<<dis[child]<<" "<<low[v[child][i]]<<endl;
				at.insert(child);
			}
			low[child]=min(low[child],low[v[child][i]]);
			//cout<<low[child]<<" "<<low[v[child][i]]<<endl;

		}
		else
		{
			low[child]=min(low[child],dis[v[child][i]]);
		}
		if(children>1&&parent==-1)
		{
			at.insert(child);
			//cout<<"hello"<<endl;
		}

	}
}
void init()
{
	for(int i=0;i<10000;i++)
	{
		v[i].clear();
	}
	memset(vis,0,sizeof(vis));
	memset(dis,0,sizeof(dis));
	memset(low,0,sizeof(low));
	at.clear();
	l=0;
}
int main()
{
	int t;
	cin>>t;
	int cs=0;
	while(t--)
	{
		init();
		cout<<"Case "<<++cs<<": ";
		int n,m;
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			int a,b;
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		dfs(1,-1);
		cout<<at.size()<<endl;
	}
}	