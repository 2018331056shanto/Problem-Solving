#include<bits/stdc++.h>
using namespace std;
int g[10][10];
int vis[10][10];
std::vector<pair<int,int>> v;
void bfs(int start)
{
	int flag=0;
	queue<int>q;
	q.push(start);
	while(!q.empty()){

		int front=q.front();
		q.pop();
	for(int i=0;i<8;i++)
	{

		if(g[front][i]==1&&vis[front][i]!=1)
		{
			q.push(i);
		}
	}
	if(!flag)
	{
		v.push_back({front,q.size()});
		flag=1;
	}
}

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	g[1][2]=1;
	g[2][3]=1;
	g[4][3]=1;
	g[4][5]=1;
	g[4][2]=1;
	g[5][1]=1;
	g[6][5]=1;
	g[6][1]=1;
	g[6][7]=1;
	g[6][0]=1;
	g[7][0]=1;
	g[0][1]=1;
	g[0][5]=1;

	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cout<<g[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<8;i++)
	{
		memset(vis,0,sizeof(vis));
		//cout<<" i am "<<i<<endl;
		bfs(i);
	}
	int mx=0,mn=199;
	for(int i=0;i<v.size();i++)
	{
		mx=max(mx,v[i].second);
		mn=min(mn,v[i].second);
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i].second==mx)
		{
			cout<<v[i].first<<endl;
			cout<<mx<<endl;
		}
		if(v[i].second==mn)
		{
			cout<<v[i].first<<endl;
		}
	}

	
}