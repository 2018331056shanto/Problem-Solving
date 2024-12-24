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

	int find(int i)
	{
		return (par[i]==i?i:(par[i]=find(par[i])));
	}

	bool is_same(int i,int j)
	{
		return find(i)==find(j);
	}

	int cound()
	{
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
	
	int n,q;
	cin>>n>>q; 

	DSU dsu(n);
	for(int i=0;i<q;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;

		if(x==0)
		{
			dsu.merge(y,z);
		}
		else
		{
			cout<<dsu.is_same(y,z)<<endl;
		}

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
