#include<bits/stdc++.h>
using namespace std;

std::vector<int>adj[100],reverseAdj[100],vect,comp;
int visited[100];

void dfs(int u)
{
	visited[u]=1;

	for(auto v:adj[u])
	{
		if(!visited[v])
		{
			dfs(v);
		}
	}
	vect.push_back(u);

}

void dfs2(int u)
{
	comp.push_back(u);
	visited[u]=1;
	for(auto v:reverseAdj[u])
	{
		if(!visited[v])
		{
			dfs2(v);
		}
	}
}
void solve(){
	
	int n,m;
	cin>>n>>m;

	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		reverseAdj[y].push_back(x);
	}

	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			dfs(i);
		}
	}

	reverse(vect.begin(),vect.end());
	memset(visited,0,sizeof(visited));

	int numOfSCC=0;
	vector<vector<int>>verteciesOfSCC;
	for(auto x:vect)
	{

		if(!visited[x])
		{
			comp.clear();
			dfs2(x);
			numOfSCC++;
			verteciesOfSCC.push_back(comp);

		}
	}
	cout<<numOfSCC<<endl;

	for(auto x:verteciesOfSCC)
	{
		for(auto y:x)
		{
			cout<<y<<" ";
		}
		cout<<endl;
	}

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
