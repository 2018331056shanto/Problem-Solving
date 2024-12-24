/*


                 """Bismillahir Rahmanur Rahim"""

*/
#include<bits/stdc++.h>
using namespace std;
void shikariIsListening()
{
#ifndef ONLINE_JUDGE
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
#endif
}
#define pi 2*acos(0.0)
#define ll long long int
#define inf 922337203470075000LL
#define pb push_back
#define pf push_front
#define ek(x) __builtin_popcount(x)
#define ses '\n'
#define in(x) scanf("%lld",&x);
#define out(x) printf("%lld\n",x);
#define stm istringstream
#define all(x) x.begin(),x.end()
#define tin ll T;cin>>T; for(ll o=1;o<=T;o++)
#define tout cout<<"Case "<<o<<":\n";
#define vll vector<ll>
#define pii pair<ll,ll>
#define fs first
#define sc second
#define sz 100007
map<ll,std::vector<ll> >mp;
int main()
{

  //shikariIsListening();
  ll n,u,v;
  cin>>n;
  for(ll i=0;i<n;i++)
  {
     cin>>u>>v;
     mp[u].pb(v);
  }

int cnt=0;
  for(auto i:mp)
  {
    cnt++;
    
     ll idx=i.first;
     cout<<idx<<" => ";
     sort(mp[idx].begin(),mp[idx].end());
     reverse(mp[idx].begin(),mp[idx].end());
     for(ll j=0;j<mp[idx].size();j++)
     {
        cout<<mp[idx][j]<<" ";
     }
     cout<<ses;
  }
  cout<<cnt<<endl;



}
/*   --------------------
    |      SOHAN       |
    |   ShikariSohan   |
     --------------------
    || VALAR MORGULIS||==|| ALL MEN MUST DIE ||
    \ Power Is Power//
    || I Can Do This All day ||
    // We are on a Break \ // How you doin'? \
    || Say My Name || ~~ || I Am The Who Knocks ||
    // I Am Ted Mosby Architect \
    || It Is Legen --wait for it -- dary ,Legendary ||
    \ Penny - Penny - Penny // -- Bazinga

*/