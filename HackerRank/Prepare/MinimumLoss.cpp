#include<bits/stdc++.h>
using namespace std;


void solve(){
    
    long long  n;
    cin>>n; 

    std::vector<pair<long long,long long>> v(n);

    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x; 
        v[i]={x,i};
    }

    sort(v.begin(),v.end());

    long long ans=INT_MAX;

    for(int i=1;i<n;i++)
    {
        if(v[i].second<v[i-1].second)
        {
            ans=min(ans,v[i].first-v[i-1].first);
        }
    }
    cout<<ans<<endl;

}

int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        // int t;
        // cin>>t;
        // while(t--)
        {
            solve();
        }
    }
