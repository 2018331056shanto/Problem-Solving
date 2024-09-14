#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,x;
	cin>>n>>x;

	
	std::vector<int> adj[n+1];

	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	int level=0;
	vector<int>vis(n+1,0);
	queue<int>q;
	q.push(0);
	vis[0]=1;


	while(!q.empty())
	{
		int sz=q.size();

		while(sz--)
		{

			int f=q.front();
			q.pop();
			if(f==x)
			{
				cout<<level<<endl;
				return ;
			}

			for(auto y:adj[f])
			{
				if(!vis[y])
				{
					q.push(y);
					vis[y]=1;
				}
			}
		}
		level++;
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
