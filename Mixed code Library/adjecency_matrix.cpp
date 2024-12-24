#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v,e;
	cin>>v>>e;
	int a[v+100][e+100]={};
	while(v--)
	{
		int u,w;
		cin>>u>>w;
		a[u][w]=1;
		a[w][u]=1;
	}
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			if(a[i][j]==1)
			cout<<"there is a connection from  "<<i"to  "<<j<<" ";
		}
	}
	return 0;
}