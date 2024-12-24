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
int main()
{
   tin
   {
       ll n;
       in(n);
       ll sum=1,ans=1;
       for(ll i=1;;i++)
       {
           sum*=2;
           ans+=sum;
           cout<<ans<<endl;
           if(n%ans==0)
           {
               cout<<n/ans<<ses;
               break;
           }
       }
 
   }
 
}