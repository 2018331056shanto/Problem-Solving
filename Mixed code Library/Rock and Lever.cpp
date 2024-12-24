#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int cnt[50];
          long long int ans=0;
          memset(cnt,0,sizeof(cnt));
        for(int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
          
            long long int j=0;
            for(int i=0;i<=32;i++)
            {
                if(x&(1LL<<i))
                {
                    j=i+1;
                }
            }
            ans+=cnt[j];
    
            cnt[j]++;
        }
       
        cout<<ans<<endl;
    }
}