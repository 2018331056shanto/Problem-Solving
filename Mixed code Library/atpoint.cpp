#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[1000];
int vis[1000];

int artipoint[1000];
int low[1000],dist[1000];
int l=0;
void dfs(int child,int parent)
{
	int j=++l;
	low[child]=j;
	dist[child]= j;
	vis[child]=1;
	cout<<"visited : "<<child<<endl;
	int children=0;

	for(int i=0;i<v[child].size();i++)
	{
		if(v[child][i]==parent)
		{
			continue;
		}
		if(!vis[v[child][i]])
		{
			cout<<"before dfs : "<<child<<endl;
			dfs(v[child][i],child);
			cout<<"aftar dfs : "<<child<<endl;
			children++;
			if(dist[child]<=low[v[child][i]])
			{
				artipoint[child]=1;
				cout<<"articulation point : "<<child<<endl;
			}
			low[child]=min(low[child],low[v[child][i]]);

		}
		else
		{
			cout<<"in else : "<<child<<endl;
			low[child]=min(low[child],dist[v[child][i]]);
		}
		if(children>1&&parent==-1)
		{
			artipoint[child]=1;
		}
	}
}
int main()
{
	int e;
	cin>>e;
	for(int i=0;i<e;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,-1);
	for(int i=0;i<10;i++)
	{
		cout<<artipoint[i]<<" ";
	}


	
}
		

		