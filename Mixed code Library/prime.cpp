/*

                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
#define inf 922337203470075000
#define pb push_back
#define pf push_front
#define ll long long int
const ll sz = 1000001;
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%d",&x);
#define out(x) printf("%d",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define ghora ios_base::sync_with_stdio(0);cin.tie(0);
#define gcd __gcd
ll lcm(ll x,ll y){return (x*y)/gcd(x,y);}
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<": ";
#define spc printf(" ");
#define M 10000005
bool marked[M+5];

bool isPrime(ll n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}
vector<ll>v;
void sieve()
{
  for (ll i = 3; i * i <= M; i += 2) {
    if (marked[i] == false) {
      for (ll j = i * i; j <= M; j += i + i) {
        marked[j] = true;
      }
    }
  }
  for(ll i=1;i<M;i++)
    if(isPrime(i))
        v.push_back(i);
}
int main()
{
// freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
   sieve();

   ll x;
   cin>>x;
   for(ll i=1;i<=x;i++)
   {
       ll l,r;
       cin>>l>>r;
       ll p=lower_bound(v.begin(),v.end(),l)-v.begin();
       ll q=lower_bound(v.begin(),v.end(),r)-v.begin();
       cout<<"Total prime between "<<l<<" and "<<r<<" is "<<q-p+1<<ses;
   }
    return 0;
}
/*   --------------------
    |      SOHAN       |
    |   Chandler68     |
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
