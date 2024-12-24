#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000
#define pb push_back
#define pf push_front
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y)
{
    return (x*y)/gcd(x,y);
}
#define tin ll xxx;cin>>xxx; for(ll o=1;o<=xxx;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
vector<pair<ll,ll>>v;
 
int main()
{
    double r,n,x,a;
    cin>>n>>r>>x;
    if(n<3)
    {
        if(n==2)
        {
            a=(r/2);
        }
        if(n==1)
        {
            a=r;
 
        }
    }
    else
    {
        double theta=(n-2.0)*180.00;
        theta=theta/n;
        theta=(theta*pi)/180.00;
        theta=theta/2.0;
        a=(cos(theta))/(1+cos(theta));
        a*=r;
    }
    cout<<a<<endl;
    if(a>=x)
        cout<<"YES"<<ses;
    else
        cout<<"NO"<<ses;
 
}
 
/*   --------------------
    |      ~SOHAN~       |
    |   ~Chandler68~     |
     ----------------n----
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \\ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \\ // How you doin'? \\
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \\
    || It Is Legen --wait for it -- dary ,Legendary ||
    \\ Penny - Penny - Penny // -- Bazinga
 
*/