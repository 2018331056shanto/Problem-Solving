#include<bits/stdc++.h>
using namespace std;
 
#define clean(x,y) memset(x,y,sizeof(x));
#define pb push_back
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
#define ALL(v) v.begin(),v.end()
#define PI acos(-1.0)
#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define printa(a,L,R) for(int ii=L; ii<R; ii++) cout<<a[ii]<<" \n"[ii==R-1]
#define printv(a) printa(a,0,a.size())
#define Unique(a) sort(ALL(a)); (a).resize(unique(ALL(a)) - (a).begin())
#define MOD 1000000007
#define MAX 1005
 
#define dbg(x) cout<<(#x)<<"="<<(x)<<":\n"
#define CS(i) cout<<"Case "<<i<<": "
#define tin ll T; cin>>T; while(T--)
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector< pii > vpi;
typedef vector< pll > vpl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
 
 
int parent[MAX],Size[MAX];
 
void make_set(int v)
{
    parent[v]=v;
    Size[v]=1;
}
 
int find_set(int v)
{
    if(parent[v]==v)
        return v;
    return parent[v]=find_set(parent[v]);
}
 
void union_sets(int a, int b)
{
    a=find_set(a);
    b=find_set(b);
    if(a!=b)
    {
        if(Size[a]<Size[b])
            swap(a,b);
        parent[b]=a;
        Size[a]+=Size[b];
    }
}
void init()
{
    for(int i=0; i<MAX; i++)
        make_set(i);
}
int main()
{
    FAST
 
    init();
    int n,i,x,y,a,b;
    vpi v;
    cin>>n;
    for(i=1; i<n; i++)
    {
        cin>>x>>y;
        a=find_set(x);
        b=find_set(y);
        if(a==b)
        {
            v.pb({x,y});
        }
        else
        {
            union_sets(a, b);
        }
    }
    cout<<v.size()<<endl;
    for(auto p : v)
    {
        x=find_set(p.F);
        for(i=1; i<=n; i++)
        {
            y=find_set(i);
            if(x!=y)
            {
                cout<<p.F<<" "<<p.S<<" "<<p.F<<" "<<i<<endl;
                union_sets(p.F, i);
                break;
            }
 
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<Size[i]<<" ";
    }
 
 
 
 
 
    return 0;
}