#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int a[1000];
        vector<int>e;
        memset(a,0,sizeof(a));
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            a[b]++;
        }
        int ans=0;
        for(int i=2;i<=2*n;i++)
        {
            int cnt=0;
            for(int j=1;j<(i+1)/2;j++)
            {
               if(i-j>n)
               continue;
               cnt+=min(a[i-j],a[j]);

            }
            if(i%2==0)
            {
                cnt+=a[i/2]/2;
            }
            ans=max(ans,cnt);
            
        }
        cout<<ans<<endl;

         
         
    }
    
}