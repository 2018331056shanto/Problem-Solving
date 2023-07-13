#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>v;
vector<long long>cnt;

void dfs(int c,int p)
{
	if(v[c].size()==1&&v[c][0]==p)
	{
		cnt[c]=1;
	}
	else{

		for(auto x:v[c])
		{
			if(x!=p)
			{
				dfs(x,c);
				cnt[c]+=cnt[x];
			}
		}
	}
}

void solve(){
	
	int n;
	cin>>n;
	v.assign(n+1,vector<int>());
	cnt.assign(n+1,0);

	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);

	}

	dfs(1,-1);
	// for(auto x:cnt)
	// {
	// 	cout<<x<<endl;
	// }

	int q;
	cin>>q;

	long long ans=0;
	for(int i=0;i<q;i++)
	{
		int x,y;
		cin>>x>>y;
		ans=cnt[x]*cnt[y];
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
