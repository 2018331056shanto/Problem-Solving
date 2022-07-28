#include<bits/stdc++.h>
using namespace std;
int parent[10000];
int size[10000];
int rank[10000];
void make_set(int v)
{
	parent[v]=v;
	size[v]=1;
	// rank[v]=0;
}
int find_set(int v)
{
	if(v==parent[v])
		return v;
	return parent[v]=find_set(parent[v]);
}
void union_sets(int a,int b)
{
	a=find_set(a);
	b=find_set(b);
	if(a!=b)
	{
		//use sizeo fo tree as rank
		if(size[a]<size[b])
		{
			swap(a,b);
			
		}
		parent[b]=a;
		size[a]+=size[b];
		//size of depth as rank
		// if(rank[a]<rank[b])
		// {
		// 	swap(a,b);
			
		// }
		// parent[b]=a;
		// if(rank[a]==rank[b])
		// {
		// 	rank[a]++;
		// }
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=0;i<=n;i++)
	{
		make_set(i);
	}
	for (int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		union_sets(x,y)
	}
}