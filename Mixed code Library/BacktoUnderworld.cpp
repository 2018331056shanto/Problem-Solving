#include<bits/stdc++.h>
using namespace std;
vector<int> v[20001];
int vis[20001];
int color[20001];
int bfs(int x)
{
	queue<int>q;
	q.push(x);
	vis[x]=1;
	int red,black;
	red=black=0;
	color[x]=1;
	red++;
	while(!q.empty())
	{
		int f=q.front();
		q.pop();
	
		
		for(int i=0;i<v[f].size();i++)
		{
			if(!vis[v[f][i]])
			{
				q.push(v[f][i]);
				vis[v[f][i]]=1;
				if(color[v[f][i]]==0)
				{
					if(color[f]==1)
					{
						color[v[f][i]]=2;
						black++;
					}
					else
					{
						color[v[f][i]]=1;
						red++;
					}

				}

			}
		}
	}
	return max(red,black);

}
void init()
{
	for(int j=0;j<20001;j++)
		    v[j].clear();
		memset(color,0,sizeof(color));
		memset(vis,0,sizeof(vis));
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n;
		cin>>n;
		init();
		while(n--)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int sum=0;
		for(int j=1;j<20001;j++)
		{
			if(!vis[j] && !v[j].empty())
			{
				sum+=bfs(j);

			}
		}

		cout<<"Case "<<i<<": "<<sum<<endl;
		

	}
	
}
		

		