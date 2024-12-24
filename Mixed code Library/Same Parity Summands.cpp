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
        if(k>n)
        {
            cout<<"NO"<<endl;
        }
        else if(n==k)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<endl;
        }
        else
        
        
        {
           if(n%2==0)
           {
               if(k*2<=n)
               {
                   cout<<"YES"<<endl;
                   cout<<n-(k*2)+2<<" ";
                   for(int i=1;i<k;i++)
                   {
                       cout<<"2"<<" ";
                   }
                   cout<<endl;
               }
               else if(k%2==0)
               {
                   cout<<"YES"<<endl;
                   cout<<n-k+1<<" ";
                   for(int i=1;i<k;i++)
                   {
                       cout<<"1"<<" ";
                   }
                   cout<<endl;

               }
               else
               {
                   cout<<"NO"<<endl;
               }
               
               
           }
           else
           {
               if(k%2==1)
               {
                   cout<<"YES"<<endl;
                   cout<<n-k+1<<" ";
                   for(int i=1;i<k;i++)
                   {
                       cout<<"1"<<" ";
                   }
                   cout<<endl;
               }
               else
               {
                   cout<<"NO"<<endl;
               }
               
               
              

           }
           



        }
    }
}