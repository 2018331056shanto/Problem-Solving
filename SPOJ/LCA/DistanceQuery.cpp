#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>par,depth;
std::vector<vector<int>>adj;
vector<vector<int>>up;
int mn=INT_MAX,mx=INT_MIN;

int findLog()
{
	int LOG=0; 

	while((1<<LOG)<=n)
	{
		LOG++;
	}
	return LOG;
}

void binaryLifting(int LOG)
{
	for(int i=1;i<=n;i++)
	{
		up[i][0]=par[i];
	}

	for(int j=1;j<LOG;j++)
	{
		for(int i=1;i<=n;i++)
		{
			// cout<<up[i][j-1]<<endl;
			up[i][j]=up[up[i][j-1]][j-1];
		}
	}
}


void dfs(int child,int parent,int d)
{
	// cout<<child<<" "<<parent<<" "<<d<<endl;
	par[child]=parent;
	depth[child]=d;

	for(auto x:adj[child])
	{
		if(x!=parent)
		{
			dfs(x,child,d+1);
		}
	}
}

int getLCA(int x,int y,int LOG){

	if(depth[x]<depth[y])
		swap(x,y);
	int k=depth[x]-depth[y];

	for(int i=LOG-1;i>=0;i--)
	{
		if(k&(1<<i))
		{
			
		}
	}
}
void solve(){
	
	cin>>n; 
	vector<vector<int>>w(n+1,vector<int>(n+1,0));

	for(int i=0;i<=n;i++)
	{
		vector<int>tmp;
		adj.push_back(tmp);
		
	}	

	depth=vector<int>(n+1);
	par=vector<int>(n+1);
	for(int i=0;i<n-1;i++)
	{
		int x,y,z;
		cin>>x>>y>>z; 

		adj[x].push_back(y);
		adj[y].push_back(x);

		w[x][y]=z;
	}


	dfs(1,0,0);
	int LOG=findLog();
	up=vector<vector<int>>(n+1,vector<int>(LOG+1));

	binaryLifting(LOG,up);


	int q;
	cin>>q; 

	for(int i=0;i<q;i++)
	{
		int x,y;
		cin>>x>>y;


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
