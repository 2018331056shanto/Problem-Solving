#include<bits/stdc++.h>
using namespace std;

int findLog(int n)
{
	int LOG=0;

	while((1<<LOG)<=n)
	{
		LOG++;
	}
	return LOG;
}

void binaryLifting(vector<vector<int>>&up,vector<int>&parent,vector<int>&depth,int LOG)
{
	for(int i=1;i<parent.size();i++)
	{
		up[i][0]=parent[i];
		if(i!=1)
		{
			depth[i]=depth[parent[i]]+1;
		}

		for(int j=1;j<LOG;j++)
		{
			up[i][j]=up[up[i][j-1]][j-1];
		}
	}
}
int getTheKthAncestor(int node,int k,int LOG,vector<vector<int>>&up,vector<int>&depth)
{

	if(depth[node]<k)
	{
		return -1;
	}

	for(int i=0;i<LOG;i++)
	{
		if(k&(1<<i))
		{
			node=up[node][i];
		}
	}
	return node;
}
void solve(){
	
	int n,q;
	cin>>n>>q; 

	std::vector<int> parent(n+1);
	parent[1]=0;
	for(int i=2;i<=n;i++)
	{
		cin>>parent[i];
	}

	int LOG=findLog(n);

	vector<vector<int>>up(n+1,vector<int>(LOG));


	vector<int>depth(n+1);

	binaryLifting(up,parent,depth,LOG);

	for(int i=0;i<q;i++)
	{
		int x,y;
		cin>>x>>y; 

		cout<<getTheKthAncestor(x,y,LOG,up,depth)<<endl;
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
