#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	std::vector<pair<int,pair<int,int>>> v;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back({y,{x,i+1}});
	}
	sort(v.begin(),v.end());
	long long ans=0;
	vector<pair<int,int>>idx;
	for(int i=0;i<2*n;i++)
	{
		ans+=v[i].first;
		idx.push_back({v[i].second.first,v[i].second.second});

	}
	sort(idx.begin(),idx.end());

	cout<<ans<<endl;
	
	int i=0;
	for(i;i<n;i++)
	{
		if(i%2==0)
		{

		cout<<idx[i].second<<" "<<idx[2*n-i-1].second<<endl;

		}
		else
		{
			cout<<idx[2*n-i-1].second<<" "<<idx[i].second<<endl;
		}
	}


}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}	