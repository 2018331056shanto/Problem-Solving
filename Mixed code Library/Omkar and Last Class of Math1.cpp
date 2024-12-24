#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        long  long int ans=1;
        cin>>n;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                ans=max(ans,n/i);
            }
        }
        cout<<ans<<" "<<n-ans<<endl;
    }

}