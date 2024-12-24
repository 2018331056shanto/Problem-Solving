#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=1;
        cin>>n;
        for(int i=1;i<n;i++)
        {
            
             sum+=pow(2,i);
            // cout<<sum<<endl;
             
             if(n%sum==0)
             {
                 cout<<n/sum<<endl;
                 break;
             }
             
        }
    }
}