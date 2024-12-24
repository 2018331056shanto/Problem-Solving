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


void binaryLifting(vector<int>&parent,vector<vector<int>>&up,int LOG,int n)
{
	//if order is messed up
	for(int i=1;i<=n;i++)
	{
		up[i][0]=parent[i];
	}

	for(int j=1;j<LOG;j++)
	{
		for(int i=1;i<=n;i++)
		{
			up[i][j]=up[up[i][j-1]][j-1];
		}
	}
}


int getLCA(vector<vector<int>>&up,vector<int>&depth,int x,int y,int LOG)
{
	if(depth[x]<depth[y])
	{
		swap(x,y);
	}

	int k=depth[x]-depth[y];

	for(int i=LOG-1;i>=0;i--)
	{
		if(k&(1<<i))
		{
			
			x=up[x][i];
		}
	}

	if(x==y)
	{
		return x;
	}

	for(int i=LOG-1;i>=0;i--)
	{
		if(x!=y)
		{
			x=up[x][i];
			y=up[x][i];
		}
	}
	
	return up[x][0];
}

void findParent(vector<vector<int>>v,vector<int>&parent,vector<int>&visit,int child,vector<int>&depth)
{
	visit[child]=1;
	
	for(int i=0;i<v[child].size();i++)
	{
		
		int nextChild=v[child][i];

		if(visit[nextChild]!=1)
		{
			depth[nextChild]=depth[child]+1;

			parent[nextChild]=child;
	

			findParent(v,parent,visit,nextChild,depth);			
		}

	}
}
void solve(){
	
	int n,q;
	cin>>n>>q; 

	vector<vector<int>>v;

	for(int i=0;i<=n;i++)
	{
		vector<int>l;
		v.push_back(l);
	}
	bool flag=true;
	int root=0;
	for(int i=0;i<n-1;i++)
	{
		int x,y; 

		cin>>x>>y; 
		if(flag)
		{
			root=x;
			flag=false;
		}
		v[x].push_back(y);
		v[y].push_back(x);
	}




	
	int LOG=findLog(n);
	vector<vector<int>>up(n+1,vector<int>(LOG));
	vector<int>depth(n+1);	
	vector<int>parent(n+1);
	parent[1]=0;
	vector<int>visit(n+1);
	findParent(v,parent,visit,1,depth);

	binaryLifting(parent,up,LOG,n);

	for(int i=0;i<q;i++)
	{
		int x,y;
		cin>>x>>y; 
		int z=getLCA(up,depth,x,y,LOG);
		cout<< depth[x]+depth[y]-2*depth[z]<<endl;
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
