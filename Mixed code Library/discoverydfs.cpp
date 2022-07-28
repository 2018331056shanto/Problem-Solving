#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[1000];
int discover[1000];
int vis[1000];
int fin[1000];
int d=1;

void dfs(int x)
{
	vis[x]=1;
	discover[x]=d;
	d++;
	for(int i=0;i<v[x].size();i++)
	{

		if(!vis[v[x][i]])
		{
			
			dfs(v[x][i]);
		}
	}
	fin[x]=d;
	d++;

}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1);
	for(int i=1;i<10;i++)
	{
		cout<<discover[i]<<" ";

	}
	cout<<endl;
	for(int i=1;i<10;i++)
	{
		cout<<fin[i]<<" ";
	}

	

}
		

		