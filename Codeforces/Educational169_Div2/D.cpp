#include<bits/stdc++.h>
using namespace std;

bool intersect(const string &a, const string &b) {
	string out;
	set_intersection(a.begin(),a.end(), b.begin(),b.end(), back_inserter(out));
	return out.size();
}

void solve(){
	
	int n,q;
	cin>>n>>q;

	std::vector<string>s(n);

	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}

	map<string,set<int>>mp;

	for(int i=0;i<n;i++)
	{
		mp[s[i]].emplace(i);
	}

	while(q--)
	{
		int x,y;
		cin>>x>>y; 

		x--;
		y--;

		if(x>y)
		{
			swap(x,y);
		}

		if(intersect(s[x],s[y]))
		{
			cout<<y-x<<endl;
			continue;
		}

		int ans=1e9;

		for(auto &[k,v]:mp)
		{
			if(k==s[x] || k==s[y])
				continue;

			auto it=v.lower_bound(x);

			if(it!=v.end())
			{
				ans=min(ans,*it-x);
			}
			if(it!=v.begin())
			{
				it--;
				ans=min(ans,y-*it);
			}
		}

		if(ans>y-x &&ans!=1e9)
		{
			ans=2*(ans-(y-x))+y-x;
		}
		ans=max(ans,y-x);

		if(ans==1e9)
			ans=-1;
		cout<<ans<<endl;
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
