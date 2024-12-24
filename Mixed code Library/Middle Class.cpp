#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,co=0;
        long long int sum=0;
        vector<int>a;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
       sort(a.begin(),a.end(),greater<int>());
       for(int j=0;j<a.size();j++)
       {
           
           
        
           if(a[j]>=x)
           {
               sum+=(a[j]-x);
              co++; 
              
           }
             
            
          
           if(a[j]<x)
           {
               sum=sum-(x-a[j]);
               if(sum<0)
               break;
            co++;
           }
           
         //  cout<<sum<<endl;
         
           
         // cout<<a[j]<<endl;
         
         
       }
        cout<<co<<endl;
    }
}