#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define sz 2000009
#define mx 10000000000008
#define mod 1000000007
ll n,t,arr[sz],brr[sz],crr[sz];
vector<ll>v;
char c[sz];
int main()
{
  scanf("%lld",&t);
  while(t--)
  {
      scanf("%lld %s",&n,&c);
      ll ans=0;
      priority_queue<pair<ll,ll> >pq;
      for(int i=0;i<n;)
      {
          int j=i+1;
          while(j<n && c[j]==c[j-1])
            j++;
          v.push_back(j-i);
          ll a=v.size();
          pq.push({j-i,-(a-1)});
          i=j;
      }
        int cnt=0,cnt1=v.size()-1;
      for(int i=0;i<v.size();i++)
      {
            cnt=max(i+1,cnt);
            if(!v[i])
            continue;
         else if(v[i]>1)
            ans++;
          else
          {
            while(cnt<v.size() && v[cnt]<2)
                cnt++;
            if(cnt==v.size())
                {
            while(cnt1>i && v[cnt1]==0)
                    cnt1--;
                   if(cnt1>i)
                {
            v[cnt1]--;
                }
                }
                else
            {
        v[cnt]--;
    }
                ans++; 
          }
            
      }
      v.clear();
      printf("%lld\n",ans);
  }
  return 0;
}
