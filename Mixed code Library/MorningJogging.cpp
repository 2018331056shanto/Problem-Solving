#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<pair<int,int>>v;
		int tab[120][120]={};
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int x;
				cin>>x;
				v.push_back({x,i});
			}

		}
		sort(v.begin(),v.end());
		int l=1;
		for(auto x:v)
		{
			if(l>m)
			{
				break;
				
			}int d=x.second;
				tab[d][l]=x.first;

				l++;

		}
		int k=0;
		for(auto x:v)
		{
			if(k<m)
			{
				k++;continue;
			}
			int d=x.second;
			//cout<<d<<endl;
			for(int i=1;i<=m;i++)
			{
				if(tab[d][i]==0)
				{
					tab[d][i]=x.first;
					break;
				}
			}
			
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cout<<tab[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}	