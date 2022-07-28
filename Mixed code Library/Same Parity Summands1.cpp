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
        int l,m;
        l=n;
        m=n;
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
 
        else if(n%2==0&&k*2<=n)
        {
            cout<<"YES"<<endl;
            cout<<l-(2*k)+2<<" ";
            for(int i=1;i<k;i++)
            {
                cout<<"2"<<" ";
            }
            cout<<endl;
        }
       
    
        
        
        else if(n%2==1&&k%2==1||(n-2==k))
        {
            cout<<"YES"<<endl;
            cout<<m-k+1<<" ";
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