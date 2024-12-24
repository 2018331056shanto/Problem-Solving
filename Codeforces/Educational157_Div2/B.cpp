#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;

	vector<int>v(2*n);
	for(int i=0;i<2*n;i++)
	{
		cin>>v[i];
	}

	sort(v.begin(),v.end(),greater<>());

	vector<pair<int,int>>ans;
	int sum=0;
	for(int i=0,j=2*n-1;i<j;i++,j--)
	{

		ans.push_back({v[i],v[j]});
	}

	for(int i=0;i<ans.size()-1;i++)
	{
		sum+=(ans[i].first-ans[i+1].first)+(abs(ans[i].second-ans[i+1].second));

	}
	cout<<sum<<endl;
	for(auto x:ans)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}

}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
