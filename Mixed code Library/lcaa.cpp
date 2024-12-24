#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[10000];
int depth[10000];
int parent[10000];
int vis[10000];
int sp[10000][30];
void dfs(int par,int child,int d)
{
	depth[child]=d;
	parent[child]=par;
	vis[child]=1;
	for(int i=0;i<v[child].size();i++)
	{

		if(!vis[v[child][i]])
		{
			dfs(child,v[child][i],d+1);
		}
	}

}
void sparse(int n)
{
	int log=14;
	for(int i=0;i<n;i++)
	{
		sp[i][0]=parent[i];
	}
	for(int i=1;(1<<i)<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sp[j][i]=sp[sp[j][i-1]][i-1];
		}
	}
}
int lca_q(int p,int q)
{
	if(depth[p]<depth[q])
	{
		swap(p,q);
	}
	int log=14;
	
	for(int i=log;i>=0;i--)
	{
	    if(depth[p]-1<<i>=depth[q])
	    {
	    	p=sp[p][i];
	    }
	}
	if(p==q)
		return p;
	for(int i=log;i>=0;i--)
	{
		if(sp[p][i]!=sp[q][i])
		{
			p=sp[p][i];
			q=sp[q][i];
		}
	}
	return parent[p];
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}cout<<"hell"<<endl;
		dfs(1,1,0);
		cout<<"bal"<<endl;
		sparse(n);
		cout<<"chat"<<endl;
		int p,q;
		cin>>p>>q;
		cout<<"hello"<<endl;
		int x=lca_q(p,q);
		cout<<"khanki"<<endl;
        cout<<x<<endl;
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<parent[i]<<" ";

		// }
	}
}	