#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	std::vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back({x,i+1});
	}
	if(n==1)
	{
		cout<<1<<" "<<1<<endl;
		return ;
	}
	sort(v.begin(),v.end());
	cout<<v[0].second<<" "<<v[n-1].second<<endl;
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