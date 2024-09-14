#include<bits/stdc++.h>
using namespace std;

struct DSU
{
	std::vector<int>par,rnk,sz;
	int c;

	DSU(int n):par(n+1),rnk(n+1,0),sz(n+1,1),c(n){

		for(int i=1;i<=n;i++)
			par[i]=i;
	}

	int find(int i){
		return (par[i]==i?i:(par[i]=find(par[i])));
	}

	int get_size(int i){

		return sz[find(i)];
	}

	int count(){
		return c;
	}

	bool is_same(int i,int j){
		return find(i)==find(j);
	}

	int merge(int i,int j){
		if((i=find(i))==(j=find(j)))
			return -1;

		else{
			--c;
			}

		if(rnk[i]>rnk[j])
			swap(i,j);

		par[i]=j;

		sz[j]+=sz[i];

		if(rnk[i]==rnk[j])
		{
			rnk[j]++;
		}
		return j;
		}

};

void solve(){
	int n,m,q;

	set<pair<int,int>>st;
	cin>>n>>m>>q; 
	vector<pair<int,pair<int,int>>>a;


	DSU dsu(n);

	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y; 
		st.insert({min(x,y),max(x,y)});

	}

	for(int i=0;i<q;i++)
	{
		string s;
		int x,y;
		cin>>s>>x>>y; 
		a.push_back({s[0]=='c',{x,y}});

		if(s[0]=='c')
		{
			st.erase({min(x,y),max(x,y)});
		}
	}
	vector<int>ans;

	for(auto [x,y]:st)
	{
		dsu.merge(x,y);
	}
	for(int i=q-1;i>=0;--i)
	{
		if(a[i].first==0)
		{
			ans.push_back(dsu.find(a[i].second.first)==dsu.find(a[i].second.second));
		}
		else
		{
			dsu.merge(a[i].second.first,a[i].second.second);
		}
	}

	for(int i=ans.size()-1;i>=0;--i)
	{
		cout<<(ans[i]?"YES":"NO")<<endl;
	}


}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}
