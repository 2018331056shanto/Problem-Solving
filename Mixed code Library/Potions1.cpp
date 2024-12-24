#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n;
  cin>>n;
  multiset<int>s;
  __int64 sum=0;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    if(sum+x>=0)
    {
      s.insert(x);
      //cout<<x<<endl;
      sum+=x;
    }
    else if(!s.empty()&&x>=(int(*s.begin())))
    {
      sum-=int(*s.begin());
     // cout<<*s.begin()<<endl;
      s.erase(s.begin());
      sum+=x;
      s.insert(x);
    }

  }
  cout<<s.size()<<endl;
  for(auto x : s)
  {
    cout<<x<<endl;
  }
}  