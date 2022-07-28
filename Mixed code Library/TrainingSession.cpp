#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		map<int,int>to,di;
		std::vector<  pair<int,int> >v;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			to[x]++;
			di[y]++;
			v.push_back({x,y});
			//cout<<v.first<<" "<<v.second<<endl;
		}

		long long ans=(n*(n-1)*(n-2))/6;
		for(int i=0;i<n;i++)
		{
			ans-=((long long)to[v[i].first]-1)*((long long )di[v[i].second]-1);
		}
		cout<<ans<<endl;
	}
}	