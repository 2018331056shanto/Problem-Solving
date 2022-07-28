#include<bits/stdc++.h>
using namespace std;
std::vector<int> adj[200005];
int xr[200005],ar[200005];
void dfs(int x,int par)
{
	xr[x]=ar[x];
	for(auto &k:adj[x])
	{
		if(par==k)
			continue;
		dfs(k,x);
		xr[x]^=xr[k];
	}

}
multiset<int>in,out;
int flag;
void dfs2(int x,int par)
{
	flag|=(xr[x]==xr[1]&&in.find(0)!=in.end());
	flag|=(xr[x]==xr[1]&&out.find(xr[1])!=out.end());
	in.insert(xr[x]);
	for(auto &k:adj[x])
	{
		if(k==par)continue;
		dfs2(k,x);
	}
	in.erase(in.find(xr[x]));
	out.insert(xr[x]);
}
void init()
{
	
	memset(xr,0,sizeof(xr));
	memset(ar,0,sizeof(ar));
	flag=0;
	in.clear();
	out.clear();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		init();
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			cin>>ar[i];
			
	
		adj[i].clear();
	
		}
	    for(int i=0;i<n-1;i++)
	    {
	    	int x,y;
	    	cin>>x>>y;
	    	adj[x].push_back(y);
	    	adj[y].push_back(x);
	    }
	    dfs(1,0);
	    if(xr[1]==0)
	    {
	    	cout<<"YES"<<endl;
	    }
	    else if(k<3)
	    {
	    	cout<<"NO"<<endl;
	    }
	    else
	    {
	    	dfs2(1,0);
	    	cout<<(flag?"YES":"NO")<<endl;
	    }

	}
}	