#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m;
	cin>>n>>m; 

	std::vector<int> v[n];
	std::vector<vector<int>>w(n,vector<int>(n,0));

	vector<int>dist(n,1e7);

	vector<int>path(n,-1);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

	for(int i=0;i<m;i++)
	{
		int x,y,p;
		cin>>x>>y>>p;

		v[x].push_back(y);
		v[y].push_back(x);
		w[x][y]=p;
		w[y][x]=p;
	}

	int s,destination;
	cin>>s>>destination;

	dist[s]=0;


	vector<int>visited(n,0);

	pq.push({0,0});
	
	while(!pq.empty())
	{	
		int idx=pq.top().second;
		int val=pq.top().first;
		pq.pop();
		visited[idx]=1;
		if(dist[idx]<val)
			continue;
		for(auto x:v[idx])
		{
			if(visited[x])
				continue;

			int newDist=val+w[idx][x];

			if(newDist<dist[x])
			{
				path[x]=idx;
				dist[x]=newDist;
				pq.push({newDist,x});
			}
		}
		if(idx==destination)
			break;
	}
	cout<<"smallest distance from source to destination : "<<dist[destination]<<endl;
	cout<<"track path"<<endl;
	int route=destination;
	while(route!=-1)
	{
		cout<<route<<" ";
		route=path[route];
	}	
	cout<<endl;

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
