#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
       int n;
       cin>>n;
       vector<int>a;
       int one=0;
       for(int i=0;i<n;i++)
       {
           int b;
           cin>>b;
           if(b==1)
           {
               one++;
           }
           a.push_back(b);
       }
       if(one<=n/2)
       {
          cout<<n/2<<endl;
          for(int i=0;i<n/2;i++)
          {
              cout<<"0"<<" ";
              
          }
          cout<<endl;
           
       }
       else
       {
           if(one%2)
           {
               cout<<one-1<<endl;
               for(int i=0;i<one-1;i++)
               {
                   cout<<"1"<<" ";
               }
               cout<<endl;
           }
           else
           {
               cout<<one<<endl;
               for(int i=0;i<one;i++)
               {
                   cout<<"1"<<" ";
               }
               cout<<endl;
           }
       }
       

    }
    
}