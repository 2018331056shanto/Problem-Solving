#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  n;
        cin>>n;
        int  p=0;
        vector<int >a;
        for(int i=1;i<=n;i++)
        {
            
            a.push_back(i);
        }
     
       cout<<"2"<<endl;
       cout<<a[n-1]<<" "<<a[n-2]<<endl;
        if((a[n-1]+a[n-2])%2==0)
        {
            p=(a[n-1]+a[n-2])/2;
        }
        else
        {
             p=(a[n-1]+a[n-2])/2+1;
        }
        
       for(int  i=n-3;i>=0;i--)
       {

           cout<<a[i]<<" "<<p<<endl;
           if((a[i]+p)%2==0)
           {
               p=(a[i]+p)/2;
           }
           else
           {
               p=(a[i]+p)/2+1;
           }
           
          
       }
    }
}