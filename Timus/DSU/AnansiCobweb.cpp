#include<bits/stdc++.h>
using namespace std;

struct DSU
{
	std::vector<int> par,sz,rnk;
	int c;

	DSU(int n):par(n+1),sz(n+1,1),rnk(n+1,0),c(n){
		for(int i=0;i<=n;i++)
		{
			par[i]=i;
		}
	}

	int find(int i)
	{
		return (par[i]==i?i:(par[i]=find(par[i])));
	}
	int get_size(int i)
	{
		return sz[find(i)];
	}

	int get_count()
	{
		return c;
	}
	int merge(int i,int j)
	{
		if((i=find(i))==(j=find(j)))
			return -1;
		else
		{
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
	int n,m;

	cin>>n>>m; 

	DSU dsu(n);
	vector<int>Eu(n+1),Ev(n+1);
	for(int i=1;i<=m;i++)
	{
		cin>>Eu[i]>>Ev[i];
	}

	vector<bool>add(n+1,true);
	
	int q;
	cin>>q;
	vector<int>query;
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x; 
		add[x]=false;
		query.push_back(x);

	}

	
	for(int i=1;i<=m;i++)
	{
		if(!add[i])
			continue;
		dsu.merge(Eu[i],Ev[i]);
	}
	vector<int>ans;
	for(int i=q-1;i>=0;i--)
	{
		ans.push_back(dsu.get_count());

		dsu.merge(Eu[query[i]],Ev[query[i]]);
	}

	reverse(ans.begin(),ans.end());

	for(auto x:ans)
		cout<<x<<" ";
	cout<<endl;
	

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

// #include <cstdio>
// #include <cstring>

// using namespace std;

// #define MAX_V 100000

// int N,M,num_comp;
// int parent[MAX_V],rank[MAX_V];

// void init(){
//     for(int i = 0;i<N;++i){
//         parent[i] = i;
//         rank[i] = 0;
//     }
    
//     num_comp = N;
// }

// int Find(int v){
//     if(parent[v]==v) return v;
//     parent[v] = Find(parent[v]);
//     return parent[v];
// }

// void Union(int u, int v){
//     int PU = Find(u), PV = Find(v);
//     if(PU==PV) return;
//     --num_comp;
    
//     if(rank[PU]<rank[PV]) parent[PU] = PV;
//     else{
//         parent[PV] = PU;
//         if(rank[PU]==rank[PV]) ++rank[PU];
//     }
// }

// #define MAX_E 100000

// int Eu[MAX_E],Ev[MAX_E];
// int Q,ind[MAX_E],ans[MAX_E];
// bool add[MAX_E];

// int main(){
//     scanf("%d %d",&N,&M);
    
//     for(int i = 0;i<M;++i)
//         scanf("%d %d",&Eu[i],&Ev[i]);
    
//     scanf("%d",&Q);
//     memset(add,true,sizeof(add));
    
//     for(int i = 0;i<Q;++i){
//         scanf("%d",&ind[i]);
//         add[--ind[i]] = false;
//     }
    
//     init();
    
//     for(int i = 0;i<M;++i){
//         if(!add[i]) continue;
//         Union(Eu[i],Ev[i]);
//     }
    
//     for(int i = Q-1;i>=0;--i){
//         ans[i] = num_comp;
//         Union(Eu[ind[i]],Ev[ind[i]]);
//     }
    
//     printf("%d",ans[0]);
//     for(int i = 1;i<Q;++i) printf(" %d",ans[i]);
//     printf("\n");
    
//     return 0;
// }