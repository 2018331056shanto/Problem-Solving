#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        
        if(n==m)
            {
                cout<<"0"<<endl;
            }
        else if(m>n||m<n)
        {
            if(n>m)
            {
               swap(n,m);
            }
           
            long long int s;
            int cnt=-1;
           while(n<=m)
           {
               if(n*8<=m)
               {
                   cnt++;
                    n=n*8;
                    s=n;
                    //cout<<s<<endl;
                   
               }
               else if(n*4<=m)
               {
                   cnt++;
                   n=n*4;
                   s=n;
                   //cout<<s<<endl;
               }
               else
               {
                   cnt++;
                   n=n*2;
                   s=n;
                  // cout<<s<<endl;
               }
               
           }
           if(s/2==m||s/4==m||s/8==m)
           {
               cout<<cnt<<endl;
           }
           else
           {
               cout<<"-1"<<endl;
           }
           

        }
        
        
        
      
        else
        {
            cout<<"-1"<<endl;
        }
        
        
        
        
    }
}