#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long int>a,c;
        long int mx=0;
        for(int i=0;i<n;i++)
        {
           long long int b;
           cin>>b;
           a.push_back(b);
           
        }
        
         int cnt=0;
        for(int i=0;i<n-1;i++)         {
            
            if(a[i]>a[i+1])
            {
                cnt+=(a[i]-a[i+1]);
                
            }

        }
       // cout<<idx<<endl;
       /*
        sort(c.begin(),c.end());
        for(int i=0;i<=idx;i++)
        {
              mx=max(mx,a[i]);
        }
        if(c.size()==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
             cout<<mx-c[0]<<endl;
        }
        
       */
      cout<<cnt<<endl;
       

    }
}