#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m,k;

	cin>>n>>m>>k; 


	vector<int>typeFish(n);

	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		typeFish[i]=0;
		for(int j=0;j<t;j++)
		{
			int x;
			cin>>x;
			--x;
			typeFish[i]|=(1<<x);

		}
		// cout<<typeFish[i]<<endl;
	}

	vector<vector<pair<int,int>>>adj(n+1);

	for(int i=0;i<m;i++)
	{
		int x,y,w;

		cin>>x>>y>>w; 

		--x,--y;

		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}

	vector<vector<int>>dist(n,vector<int>((1<<k),1e8));
	vector<vector<int>>visited(n,vector<int>((1<<k),0));

	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;

	pq.push({0,{0,typeFish[0]}});
	dist[0][typeFish[0]]=0;

	while(!pq.empty())
	{
		int val=pq.top().first;
		int node=pq.top().second.first;
		int mask=pq.top().second.second;

		pq.pop();
		if(visited[node][mask])
			continue;

		visited[node][mask]=1;

		

		for(auto [x,y]:adj[node])
		{
			int newMask=typeFish[x]|mask;

			
			int newDist=val+y;

			if(newDist<dist[x][newMask])
			{
				dist[x][newMask]=newDist;

				pq.push({newDist,{x,newMask}});
			}
		}

		
	}

	int ans=1e9;
	for(int i=0;i<(1<<k);i++)
	{
		for(int j=0;j<(1<<k);j++)
		{
			if((i|j)==(1<<k)-1)
			ans=min(ans,max(dist[n-1][i],dist[n-1][j]));
		}
	}

	cout<<ans<<endl;
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
