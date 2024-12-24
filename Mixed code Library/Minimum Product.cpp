#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long  long int a,b,x,y,n;
        ;
        cin>>a>>b>>x>>y>>n;
        if(n>=(a-x)+(b-y))
        {
            cout<<x*y<<endl;
        }
       else  if(a>b)
        { long long int ans=0;
            long long int bdif=b-y;
            if(bdif>=n)
            {
                ans=a*(b-n);
            }
            else
            {
                
                     ans=y*(a-(n-bdif));
                
                
               
            }
            cout<<ans<<endl;
         
        }
        else
        {
            long long int ans1=0;
            long long int adif=a-x;
            //cout<<adif<<endl;
            if(adif>=n)
            {
               // cout<<b<<" "<<a-n<<endl;
                ans1=b*(a-n);
            }
            else
            {
               long long int bdif=b-y;
               if(bdif>=n)
               {
                   ans1=a*(b-n);
               }
               else
               {
                   ans1=x*(b-(n-adif));
               }
               
            }
            cout<<ans1<<endl;
            
        }
        
    }
    
}