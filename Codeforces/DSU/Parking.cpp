// #include<bits/stdc++.h>
// using namespace std;

// struct DSU
// {
// 	std::vector<int> par,sz,rnk;
// 	int c;

// 	DSU(int n):par(n+1),sz(n+1,1),rnk(n+1,0),c(n){
// 		for(int i=1;i<=n;i++)
// 			par[i]=-1;
// 	}

// 	int find(int i){
// 		return par[i]==i?i:(par[i]=find(par[i]));
// 	}

// 	bool is_same(int i,int j){
// 		return find(i)==find(j);
// 	}

// 	int get_size(int i)
// 	{
// 		return sz[find(i)];
// 	}

// 	int merge(int i,int j){

// 		if((i=find(i))==(j=find(j))){
// 			return -1;
// 		}
// 		else{
// 			--c;
// 		}

// 		if(rnk[i]>rnk[j])
// 			swap(i,j);
// 		par[i]=j;
// 		sz[j]+=sz[i];

// 		if(rnk[i]==rnk[j])
// 			rnk[j]++;

// 		return j;
// 	}
// };

// void solve(){
	
// 	int n;
// 	cin>>n; 

// 	DSU dsu(n);

// 	int first=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		if(dsu.par[x]==-1)
// 		{
// 			dsu.par[x]=x;
// 			cout<<x<<" ";
// 		}
// 		else
// 		{
// 			int nextSlot=x;
// 			int last=x;
// 			while(dsu.par[nextSlot]!=-1)
// 			{
// 				last=nextSlot;
// 				nextSlot+=dsu.get_size(nextSlot);
// 				if(nextSlot>n)
// 				{
// 					nextSlot=nextSlot%n;
// 				}
// 			}

// 			dsu.par[nextSlot]=nextSlot;
// 			cout<<nextSlot<<" ";

// 			dsu.merge(last,nextSlot);
// 		}
// 	}

// }

// int32_t main()
// 	{
// 		ios_base::sync_with_stdio(false); cin.tie(NULL);
// 		// int t;
// 		// cin>>t;
// 		// while(t--)
// 		{
// 			solve();
// 		}
// 	}


#include<bits/stdc++.h>
using namespace std;

struct DSU
{
	std::vector<int>par;
	DSU(int n):par(n+1){
		for(int i=1;i<=n;i++)
			par[i]=i;
	}

	int find(int i)
	{
		return par[i]==i?i:(par[i]=find(par[i]));
	}

	void merge(int i,int j){
		par[find(j)]=find(i);
	}
};


void solve(){
	
	int n;
	cin>>n; 

	DSU dsu(n);

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x; 

		int pos=dsu.find(x);

		cout<<pos;

		if(i<n-1)
			cout<<" ";
		if(pos<n)
		{
			dsu.merge(pos+1,pos);
		}
		else
		{
			dsu.merge(1,pos);
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
