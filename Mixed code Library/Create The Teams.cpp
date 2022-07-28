#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        vector<long long int>a;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            long long int c;
            cin>>c;
            a.push_back(c);

        }
        sort(a.begin(),a.end(),greater<>());
        long long int cnt=1,ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]*cnt>=x)
            {
                ans++;
                cnt=1;
            }
            else
            {
                cnt++;
            }
            
        }
        cout<<ans<<endl;
    
    }
}