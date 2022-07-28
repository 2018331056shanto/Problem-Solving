
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	std::map<int,std::vector<int>>row,col;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int x;
			cin>>x;
			row[x].push_back(i);
			col[x].push_back(j);
		}
	}
	long long ans=0;
	for(auto &[x,y]:row)
	{
		sort(y.begin(),y.end());
		// for(int i=0;i<y.size();i++)
		// {
		// 	cout<<y[i]<<" ";
		// }
		// cout<<endl;
		long long sm=0;
		for(int i=0;i<y.size();i++)
		{
			ans+=((long long)i*y[i]-sm);
			sm+=y[i];
		}
		
	}
	for(auto &[x,y]:col)
	{
		sort(y.begin(),y.end());
		long long sm=0;
		for(int i=0;i<y.size();i++)
		{
			ans+=((long long)i*y[i]-sm);
			sm+=y[i];
		}
		
	}
	cout<<ans<<endl;

	
}
