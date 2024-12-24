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
        
         for(int i=0;i<n;i++)
         {
             int c;
             cin>>c;
             if(c<0)
             {
                c=c*-1;
             }
             if(i%2)
             {
                 cout<<c<<" ";
             }
             else
             {
                 cout<<c*-1<<" ";
             }
             
             

         }
         cout<<endl;
        
        
    }
}