/*
A graph is bipartite if it can be colored with two colors,
 or if its chromatic number is less than or equal to 2. 
 A bipartite graph is also one where the vertices can be 
 divided into two subsets, V1 and V2, such that every edge
  connects a vertex in V1 to a vertex in V2. 
  There are no edges between vertices in the disjoint sets

  */

#include<iostream>
#include<utility>
#include<queue>
using namespace std;

const int mx=100;

std::vector<int> adj[mx];
void solve()
{

	

	int node,edge;

	cin>>node>>edge;

	for(int i=0;i<edge;i++)
	{
		int x,y;
		cin>>x>>y;

		adj[x].push_back(y);
		adj[y].push_back(x);
	}


	queue<int>q;
	q.push(0);

	vector<int>color(node+2,-1);

	bool isBipartite=true;

	while(!q.empty()&&isBipartite)
	{
		int t=q.front();
		q.pop();

		for(int i=0;i<adj[t].size();i++)
		{
			int nextT=adj[t][i];

			if(color[nextT]==-1)
			{
				q.push(nextT);
				color[nextT]=1-color[t];
			}
			else if(color[nextT]==color[t])
			{
				isBipartite=false;
				break;
			}
		}
	}

	if(!isBipartite)
	{
		cout<<-1<<endl;
	}
	else
	{
		for(int i=0;i<node;i++)
		{
			if(color[i])
				cout<<i<<" ";
		}
		cout<<endl;
	}
	

}

int main()
{
	solve();
}


/*
3 4

0 1
0 2
1 3
2 3

Bipartite

2 3

0 1
0 2
1 2

Not Bipartite

*/

