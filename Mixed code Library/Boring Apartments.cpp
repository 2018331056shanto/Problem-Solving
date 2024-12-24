#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int cnt=0;
        int d=n%10;
        int ans=0;
        while(n>0)
        {
            
            n/=10;
            cnt++;
        }
       
        {
            if(d>1)
            {
             //   cout<<d<<endl;
                ans+=(d-1)*10;
               // cout<<ans<<endl;
                for(int i=1;i<=cnt;i++)
                {
                    ans+=i;
                }
                //cout<<"hi";
                cout<<ans<<endl;

            }
            else
            {
                //cout<<"hello";
                for(int i=1;i<=cnt;i++)
                {
                    ans+=i;
                }
                cout<<ans<<endl;
            }

            
        }
        
       // cout<<cnt<<endl;
    }
}