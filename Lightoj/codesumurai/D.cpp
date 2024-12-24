#include<bits/stdc++.h>
using namespace std;

vector<int>v[300000+5];

int vis[300000+10];

int depth[300000+10],depth2[300000+10];
map<int,int>mp;

void dfs(int x,int par,int mode)
{
	
	// vis[x]=1;

	for(int i=0;i<v[x].size();i++)
	{
		int child=v[x][i];
		if(child!=par)
		{	
			if(mode==1)
				depth[child]=depth[x]+1;
			else 
				depth2[child]=depth2[x]+1;
			// vis[y]=1;
			// depth++;
			dfs(child,x,mode);
			//height[x]=max(height[x],height[child]+1);
		}
	}


}

void solve(){
	
	

	int n,a,b,ans=0;
	cin>>n>>a>>b;
	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	dfs(a,0,0);dfs(b,0,1);

	for(int i=1;i<=n;i++){
		
		ans=max(ans,min(depth2[i],depth[i]));
		cout<<ans<<" "<<depth2[i]<<" "<<depth[i]<<" f\n";
	}
	cout<<ans<<"\n";
	
	
	

	

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		// {
			solve();
		// }
	}
