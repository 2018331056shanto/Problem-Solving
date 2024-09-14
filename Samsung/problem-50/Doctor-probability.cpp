/*
A Doctor travels from a division to other division where divisions are connected like a graph(directed graph) and 
the edge weights are the probabilities of the doctor going from that division to other connected division but the 
doctor stays 10 mins at each division now there will be given time and had to find the division in which he will be 
staying by that time and is determined by finding division which has high probability.

Input is number of test cases followed by the number of nodes, edges, time after which we need to find the division 
in which he will be there, the edges starting point, end point, probability.

Note: If he reaches a point where there are no further nodes then he leaves the lab after 10 mins and the traveling 
time is not considered and during that 10min at 10th min he will be in next division, so be careful

2
6 10 40 
1 2 0.3
1 3 0.7
3 3 0.2
3 4 0.8
2 4 1 
4 5 0.9
4 4 0.1
5 6 1.0
6 3 0.5
6 6 0.5

6 10 10 
1 2 0.3
1 3 0.7
3 3 0.2
3 4 0.8
2 4 1 
4 5 0.9
4 4 0.1
5 6 1.0
6 3 0.5
6 6 0.5

6 0.774000  
3 0.700000
*/

#include<iostream>
#include <climits>
#include<algorithm>
#include<vector>
#include<iomanip>

using namespace std;


const int mx=100;

vector<int>adj[mx];
double mat[mx][mx];
double ans[mx];

double now=1.0; 


void  dfs(int n,int k)
{

	if(k==0)
	{
		ans[n]+=now;

		return ;
	}

	for(auto &x:adj[n])
	{
		now*=mat[n][x]; 
		dfs(x,k-1);
		now/=mat[n][x];
	}
	return ;


}

void solve()
{
	int n,m,k;
	cin>>n>>m>>k; 

	for(int i=0;i<=n;i++)
	{
		ans[i]=0;
		adj[i].clear();

		for(int j=0;j<=n;j++)
		{
			mat[i][j]=0;
		}
	}


	for(int i=0;i<m;i++)
	{
		int x,y;
		double w;
		cin>>x>>y>>w; 

		adj[x].push_back(y);

		mat[x][y]=w; 
	}

	dfs(1,k/10);

	double res=0; 
	int idx=-1;

	for(int i=1;i<=n;i++)
	{
		if(res<ans[i])
		{
			idx=i; 
			res=ans[i];
		}
	}
	cout<<idx<<" "<<fixed<<setprecision(6)<<res<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}