#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int x=0;
	while(1)
	{
		
		
		int t;
		cin>>t;
		if(t==0)
			return 0;cout<<"Case ";
		++x;
		map<string,int>m;
		string cur;
		for(int i=0;i<t;i++)
		{
			cin>>cur;
			m[cur]=i;

		}
		string src,dest;
		int n;
		cin>>n;
		double cost;
		double dist[500][500]={0};
		for(int i=0;i<n;i++)
		{
			cin>>src>>cost>>dest;
			int x=m[src];
			int y=m[dest];
			dist[x][y]=cost;

		}
		for(int k=0;k<t;k++)
		{
			for(int i=0;i<t;i++)
			{
				for(int j=0;j<t;j++)
				{
					dist[i][j]=max(dist[i][j],dist[i][k]*dist[k][j]);
				}
			}
		}
		bool flag=false;
		for(int i=0;i<t;i++)
		{
			if(dist[i][i]>1)
			{
				flag=true;
				break;
			}
		}
		if(flag)
		{
			cout<<x<<": Yes"<<endl;
		}
		else
		{
			cout<<x<<": No"<<endl;
		}
		// for(int i=0;i<t;i++)
		// {
		// 	for(int j=0;j<t;j++)
		// 	{N
		// 		cout<<dist[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

	}
}	