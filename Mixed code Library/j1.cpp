#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int cntnode[20100];
std::vector<int> v[20100];
int n;
int dp[20100];
void dfs(int child,int par)
{
	cntnode[child]=1;
	for(int i=0;i<v[child].size();i++)
	{
		int next=v[child][i];
		if(next==par)
			continue;
		dfs(next,child);
		//cout<<cntnode[next]<<" "<<cntnode[child]<<" "<<child<<endl;
		cntnode[child]+=cntnode[next];
		//cout<<cntnode[child]<<endl;
	}
}

void DFS(int child,int par)
{
	for(int i=0;i<v[child].size();i++)
	{
		int next=v[child][i];

		if(next==par)
		{
			dp[child]=max(dp[child],n-cntnode[child]);
			continue;
		}
		DFS(next,child);
		dp[child]=max(dp[child],cntnode[next]);
	}
}
void init()
{
	memset(cntnode,0,sizeof(cntnode));
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n;i++)
	{
		v[i].clear();
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		
		
		cin>>n;
		init();
		for(int i=0;i<n-1;i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		dfs(1,-1);
		// for(int i=0;i<10;i++)
		// {
		// 	cout<<cntnode[i]<<" ";
		// }
		DFS(1,0);
		int idx=0;
		int ans=1e9;
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<dp[i]<<" ";
		// }
		for(int i=1;i<n;i++)
		{
			if(ans>dp[i])
			{
				ans=dp[i];
				idx=i;
			}
		}
		cout<<idx<<" "<<ans<<endl;


	}
}	