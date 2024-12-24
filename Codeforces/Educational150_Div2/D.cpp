#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&a,pair<int,int>&b)
{
	return a.second<b.second;
}

void solve(){
	
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}

	vector<pair<int,int>>store;

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(max(v[i].first,v[j].first)<=min(v[i].second,v[j].second))
			{
				store.push_back({min(v[i].first,v[j].first),max(v[i].second,v[j].second)});

			}
		}
	}

	sort(store.begin(),store.end(),comp);

	int cnt_pairs=0;
	int last_pos=-1;

	for(auto x:store)
	{
		// cout<<x.first<<" "<<x.second<<endl;
		if(x.first>last_pos)
		{
			cnt_pairs++;
			last_pos=x.second;
		}	
	}
	cout<<n-2*cnt_pairs<<endl;

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
