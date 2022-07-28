#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps 1e-9
#define sfi(a) scanf("%d",&a);
#define sfii(a,b) scanf("%d%d",&a,&b);
#define sfiii(a,b,c) scanf("%d%d%d",&a,&b,&c);
#define sfl(a) scanf("%ld",&a);
#define sfll(a,b) scanf("%ld%ld",&a,&b);
#define sflll(a,b,c) scanf("%ld%ld%ld",&a,&b,&c);
#define sfd(a) scanf("%lf",&a);
#define sfdd(a,b) scanf("%lf%lf",&a,&b);
#define sfddd(a,b,c) scanf("%lf%lf%lf",&a,&b,&c);
#define fread freopen("input.txt","r",stdin);
#define fwrite freopen("output.txt","w",stdout);
#define mx 1000005
#define pi acos(-1)
using namespace std;
 
int parent[10000];
int r[1000];
int n,m;
 
void make_set()
{
	for(int i=1;i<=n;++i)
	{
		parent[i]=i;
		r[i]=1;
	}
 
}
 
int find_rep(int node)
{
	if(node==parent[node]) return node;
 
	// return find_rep(parent[node]);
 
	return parent[node]=find_rep(parent[node]);
}
 
void union_set(int a, int b)
{
	int x=find_rep(a);
	int y=find_rep(b);
 
	///if(x!=y) parent[y]=x; naive
 
	if(x!=y)
	{
		if(r[x]<r[y]) swap(x,y);
 
		parent[y]=x;
 
		if(r[x]==r[y]) ++r[x];
	}
 
 
}
 
 
 
int main()
{
	#ifndef ONLINE_JUDGE
		fread
		fwrite
	#endif
 
	cin >> n; //>> m;
 
	int cnt=n;
 
	make_set();
 
	for(int i=1;i<n;++i)
	{
		int a,b;
		cin >> a >> b;
 
		if(find_rep(a)!=find_rep(b)) {union_set(a,b);--cnt;}
	}
 
	cout << cnt << endl;
	for(int i=1;i<=n;i++)
	{
		cout<<parent[i]<<" ";
	}
 
	return 0;
}