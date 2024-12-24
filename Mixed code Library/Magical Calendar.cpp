#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,k,ans=0;
    cin>>n>>k;
    if(n<=k)
    {
      ans=(n*(n+1)/2)-n+1;

    }
    
    
    else
    {
      ans=k*(k+1)/2;
    }
    cout<<ans<<endl;
  }
}