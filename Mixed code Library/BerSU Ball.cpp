#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>a,b,c[1000];
    
    for(int i=0;i<n;i++)
   {
       int d;
       cin>>d;
       a.push_back(d);
   }
   cin>>m;
   for(int i=0;i<m;i++)
   {
       int e;
       cin>>e;
       b.push_back(e);
   }
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   long long int cnt=0;

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
                  
         if(abs(a[i]-b[j])<=1)
          {
            
             // cout<<a[i]<<" "<<b[j]<<endl;
             // cout<<abs(a[i]-b[j])<<endl;
              cnt++;
              b[j]=10000;
              break;
              
          } 
      }
  }

 /* for(int i=0;i<m;i++)
  {
      cout<<b[i]<<" ";
  }
  */
  //cout<<endl;
  cout<<cnt<<endl;
}