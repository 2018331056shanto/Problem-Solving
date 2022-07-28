#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
         int n;
         cin>>n;
         long long int ans=0;
         for(int i=0;i<n;i++)
         {
             long long int x;
             cin>>x;
             ans=max(0LL,x+ans);
         }
         cout<<ans<<endl;

    }
    
}