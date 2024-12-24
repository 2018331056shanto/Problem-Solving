#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n;
       vector<int>a;
       cin>>n;
       for(int i=1,j=n-1;i<=n/2;i++,j--)
       {
          // cout<<i<<endl;
           //cout<<j<<endl;
           if(j%i==0)
           {
               a.push_back(j);
 
           }
       }
          sort(a.begin(),a.end());
          if(n%2==0)
          {
              cout<<n/2<<" "<<n/2<<endl;
          }
          else if(a.size()==0)
          {
              cout<<"1"<<" "<<n<<endl;
          }
          else
          {
              cout<<n-a[0]<<" "<<a[0]<<endl;
          }
          
       
       
 
        
    }
}