#include<bits/stdc++.h>
using namespace std;
/*int main()
{
	vector<int>g[10000];
	int v,e;
	cin>>v>>e;

	for(int i=0;i<e;i++)
	{
		int u,w;
		cin>>u>>w;
		g[u].push_back(w);
		g[w].push_back(u);
	}
	cout<<endl<<endl<<"list start from here"<<endl;
	for(int j=0;j<v;j++)
	{
		for(int k=0;k<g[j].size();k++)
		{
			cout<<g[j][k]<<" ";
		}
		puts(" ");
	}
	return 0;
}*/
int main()
{
	int n,e;
	cin>>n>>e;
  vector<int>g[10000];
  vector<int>cost[10000];
  for(int i=0;i<e;i++)
  {
  	int u,v;
  	cin>>u>>v;
  	g[u].push_back(v);
  	int x;
  	cin>>x;
  	cost[u].push_back(x);
  }
  for(int j=0;j<n;j++)
  {
  	for(int k=0;k<g[j].size();k++)
  	{
  		cout<<g[j][k]<<" ";
  	}
  }
  return 0;

}
