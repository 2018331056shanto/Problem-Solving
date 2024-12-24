#include<bits/stdc++.h>
using namespace std;

struct DSU
{
	std::vector<int>par,rnk,sz;
	int c;
	DSU(int n):par(n+1),rnk(n+1,0),sz(n+1,1),c(n){
		for(int i=1;i<=n;++i)
			par[i]=i;
	}

	int find(int i){
		return (par[i]==i?i:(par[i]=find(par[i])));
	}

	bool same(int i,int j)
	{
		return find(i)==find(j);
	}

	int get_size(int i)
	{
		return sz[find(i)];
	}
	int count(){
		//connected components
		return c;
	}

	int merge(int i,int j)
	{
		if((i=find(i))==(j=find(j)))
			return -1;
		else
			--c;
		if(rnk[i]>rnk[j])
			swap(i,j);
		par[i]=j;
		sz[j]+=sz[i];

		if(rnk[i]==rnk[j])
			rnk[j]++;
		return j;
	}
};

void solve(){
	
	int n;
	cin>>n; 

	DSU dsu(n);
	int q;
	cin>>q; 
	for(int i=0;i<q;i++)
	{
		int x,y;
		cin>>x>>y; 
		dsu.merge(x,y);
	}

	cout<<dsu.same(1,5)<<endl;


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
