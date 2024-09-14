#include<bits/stdc++.h>
using namespace std;

vector<int>d[100005],l[100005];
int mp[100005],ncnt;
int findLog(int n)
{
	int LOG=0; 

	while((1<<LOG)<=n)
	{
		LOG++;
	}
	return LOG;
}

void findSubTree(vector<int>&subTreeSize,vector<int>&depth,int start,int dep)
{
	subTreeSize[start]=1; 

	depth[start]=dep;
	mp[start]=++ncnt;

	d[dep].push_back(ncnt);

	for(int j:l[start])
	{
		findSubTree(subTreeSize,depth,j,dep+1);
		subTreeSize[start]+=subTreeSize[j];
	}



}

void binaryLifting(vector<vector<int>>&up,vector<int>&par,int LOG,int n)
{
	for(int j=1;j<LOG;j++)
	{
		for(int i=1;i<=n;i++)
		{
			up[i][j]=up[up[i][j-1]][j-1];
		}
	}
}

int findKthAncestor(vector<vector<int>>&up,int x,int k,int LOG)
{

	for(int i=LOG-1;i>=0;i--)
	{
		if(k&(1<<i))
		{
			x=up[x][i];
		}
	}
	return x;
}
void solve(){
	
	int n;
	cin>>n; 
	std::vector<int>par(n+1);
	int LOG=findLog(n);
	vector<vector<int>>up(n+1,vector<int>(LOG));

	for(int i=1;i<=n;i++)
	{
		cin>>par[i];
		up[i][0]=par[i];
		l[par[i]].push_back(i);
	}

	
	
	vector<int>subTreeSize(n+1),depth(n+1);

	for(int i=1;i<=n;i++)
	{
		if(!up[i][0])
		findSubTree(subTreeSize,depth,i,0);
	}

	binaryLifting(up,par,LOG,n);

	int q;
	cin>>q; 

	int low,high;
	for(int i=0;i<q;i++)
	{
		int x,y;
		cin>>x>>y; 

		int kthAncestor=findKthAncestor(up,x,y,LOG);
		if(kthAncestor==0)
		{
			cout<<0<<" ";
		}
		else
		{
			int dep=depth[x];

			 low=lower_bound(d[dep].begin(),d[dep].end(),mp[kthAncestor])-d[dep].begin();
			 high=upper_bound(d[dep].begin(),d[dep].end(),mp[kthAncestor]+subTreeSize[kthAncestor])-d[dep].begin();

			int ans=high-low-1;
			cout<<ans<<" " ;

		}
	}
	cout<<endl;


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
