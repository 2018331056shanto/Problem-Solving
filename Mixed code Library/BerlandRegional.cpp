#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[200008]={};
    int b[200008]={};
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
      cin>>b[j];
    }
    map<int,std::vector<long long int> >mp;
    for(int i=0;i<n;i++)
    {
      mp[a[i]].push_back(b[i]);
    }
    for(auto x:mp)
    {
      int id=x.first;
      sort(mp[id].begin(),mp[id].end(),greater<>());
     // reverse(mp[id]);
      for(int i=1;i<mp[id].size();i++)
      {
        mp[id][i]=mp[id][i-1]+mp[id][i];

      }
    }
    for(int i=1;i<=n;i++)
    {
      long long sum=0;
      for(auto x:mp)
      {
        int id=x.first;
        int sz=mp[id].size();
        int l=sz/i;
        int idx=l*i-1;
        if(idx<0)
          continue;
        //cout<<idx<<" "<<i<<endl;
        sum+=mp[id][idx];
      }
      cout<<sum<<" ";
    }
    cout<<endl;
    
  }
}  