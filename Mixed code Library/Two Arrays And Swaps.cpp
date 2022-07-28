#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
      {
          int n,k;
          cin>>n>>k;
          vector<int>a,b;
          for(int i=0;i<n;i++)
      {
          int c;
          cin>>c;
          a.emplace_back(c);
      }
      sort(a.begin(),a.end());
      for(int i=0;i<n;i++)
      {
          int d;
          cin>>d;
          b.emplace_back(d);
      }
      sort(b.begin(),b.end(),greater<int>());
      
      for(int i=0;i<k;i++)
      {
          if(a[i]<b[i])
          {
              swap(a[i],b[i]);
          }
          
      }
      long long int sum=accumulate(a.begin(),a.end(),0);
      cout<<sum<<endl;


      }
}