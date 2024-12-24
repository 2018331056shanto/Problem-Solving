#include<bits/stdc++.h>
using namespace std;
int vis[1000];
int dis[1000];
std::vector<int>tree[100];
void dfs(int x,int y)
{
	vis[x]=1;
	dis[x]=y;
	cout<<"in :"<<x<<endl;
	cout<<y<<endl;
	for(int i=0;i<tree[x].size();i++)
	{
		if(!vis[tree[x][i]])
		{
			dfs(tree[x][i],dis[x]+1);
		}
	}
	cout<<"out :"<<x<<endl;

}
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x-1;i++)
	{
		int y,z;
		cin>>y>>z;
		tree[y].push_back(z);
		tree[z].push_back(y);
	}
	dfs(0,0);

	
}
		

		