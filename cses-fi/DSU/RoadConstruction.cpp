#include<bits/stdc++.h>
using namespace std;

struct DSU
{
	std::vector<int>par,sz,rnk;
	int c;

	DSU(int n):par(n+1),sz(n+1,1),rnk(n+1,0),c(n){
		for(int i=1;i<=n;i++)
			par[i]=i;
	}	

	int find(int i){
		return (par[i]==i?i:(par[i]=find(par[i])));
	}

	bool is_same(int i,int j){
		return find(i)==find(j);
	}

	int get_size(int i)
	{
		return sz[find(i)];
	}

	int count(){
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
	
	int n,m;
	cin>>n>>m; 

	DSU dsu(n);
	int mx=0;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;

		int j=dsu.merge(x,y);
	
		mx=max(mx,dsu.get_size(j));

		cout<<dsu.count()<<" "<<mx<<endl;
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
