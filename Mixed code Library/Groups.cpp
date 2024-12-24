#include<bits/stdc++.h>
using namespace std;
int vis[10000][5];
bool vv(vector<int>v1[],int x,int n)
{

	int notvis=0;
	for(int i=0;i<v1[x].size();i++)
	{
		bool flag=true;
       int j;
		for( j=0;j<5;j++)
		{
			if(vis[v1[x][i]][j]==1)
			{
			 	flag=false;
			 	break;
			}
			
		}
		if(flag)
		{
			vis[x][v1[x][i]]=1;
				notvis++;
		}
		
	}
	//cout<<x<<" "<<notvis<<endl;
	if(notvis>=n/2)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		memset(vis,0,sizeof(vis));
		int n;
		cin>>n;
		int a[1000][5]={0};
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin>>a[i][j];
			}
		}
		std::vector<pair<int,int>> v;
		vector<int>v1[1002];
		for(int i=0;i<5;i++)
		{
			int cnt=0;
			for(int j=0;j<n;j++)
			{
				if(a[j][i]==1)
				{
					v1[i].push_back(j);
					cnt++;
				}
			}
			v.push_back({i,cnt});

		}
		int ans=0;
		for(int i=0;i<v.size();i++)
		{

			if(v[i].second>=n/2&&vv(v1,v[i].first,n))
			{
				ans++;
			}
		}
		if(ans>=2)
		{
			cout<<"YES"<<endl;

		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}	