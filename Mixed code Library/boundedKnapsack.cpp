
// /*


//                  """Bismillahir Rahmanur Rahim"""

// */
// #include<bits/stdc++.h>
// using namespace std;
// void shikariIsListening()
// {
// #ifndef ONLINE_JUDGE
//     freopen ("input.txt","r",stdin);
//     freopen ("output.txt","w",stdout);
// #endif
// }
// #define pi 2*acos(0.0)
// #define ll long long int
// #define inf 922337203470075000LL
// #define pb push_back
// #define pf push_front
// #define ek(x) __builtin_popcount(x)
// #define ses '\n'
// #define in(x) scanf("%lld",&x);
// #define out(x) printf("%lld\n",x);
// #define stm istringstream
// #define all(x) x.begin(),x.end()
// #define gcd __gcd
// ll lcm(ll x,ll y)
// {
//     return (x*y)/gcd(x,y);
// }
// #define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
// #define tout cout<<"Case "<<o<<":\n";
// #define spc printf(" ");
// #define vll vector<ll>
// #define pii pair<ll,ll>
// #define fs first
// #define sc second
// #define sz 100015
// struct  job
// {
//     ll s,e,p;
// };
// job j[10000];
// ll dp[10000];
// bool  cmp(job x,job y)
// {
//     return x.e<y.e;
// }
// ll f(ll i)
// {
//     if(i==0)
//         return j[i].p;
//     ll x=0 , y = 0,idx=-1;
//     if(dp[i]!=-1)
//         return dp[i];
//     for(ll k=i-1;k>=0;k--)
//     {
//         if(j[i].s>=j[k].e)
//         {
//             idx=k;
//             break;
//         }
//     }
//     if(idx!=-1)
//     {
//         x=j[i].p+f(idx);
//     }
//     else x=j[i].p;
//     y = f(i-1);
//     return dp[i] = max(x,y);
// }
// int main()
// {
//     //shikariIsListening();
//     int n;
//     cin>>n;
    
//     ll u,v,c;
//     memset(dp,-1,sizeof(dp));
//     for(int i=0;i<n;i++)
//     {
//         cin>>j[i].s>>j[i].e>>j[i].p;

//     }
//     sort(j,j+n,cmp);
//     cout<<f(n-1)<<ses;
   

// }
// /*   --------------------
//     |      ~SOHAN~       |
//     |   ~ShikariSohan~   |
//      --------------------
//     || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
//     \ Power Is Power//
//     || I Can Do This All day ||
//     // We are on a Break \ // How you doin'? \
//     || Say My Name || ~~ || I Am The Who Knocks ||
//     // I Am Ted Mosby Architect \
//     || It Is Legen --wait for it -- dary ,Legendary ||
//     \ Penny - Penny - Penny // -- Bazinga

// */
#include<bits/stdc++.h>
using namespace std;

struct job{
    int start,end,profit;
};
int dp[1000];
job j[1000];
bool cmp(job x,job y)
{
    return x.end<y.end;
}
int joS(int i)
{
    if(i==0)
        return j[i].profit;
    int x=0,y=0,idx=-1;
    if(dp[i]!=-1)
        return dp[i];
    for(int k=i-1;k>=0;k--)
    {
        if(j[i].start>=j[k].end)
        {
            idx=k;
            break;
        }
    }
    if(idx!=-1)
        {
            x=j[i].profit+joS(idx);
        }
        else
        x=j[i].profit;
        y=joS(i-1);
        return dp[i]=max(x,y);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>j[i].start>>j[i].end>>j[i].profit;
    }   
    sort(j,j+n,cmp);
    cout<<joS(n-1);
    
}