#include<bits/stdc++.h>
using namespace std;


void solve(){
    
    int n;
    cin>>n; 

    std::vector<vector<bool>> v(n+1,vector<bool>(2,false));

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x][y]=true;
    }

    long long ans=0;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=1;j++)
        {
            ans+=(v[i][j]&&v[i+1][!j]&&v[i-1][!j]);
        }
    }


    for(int i=0;i<=n;i++)
    {
        if(v[i][0]&&v[i][1])
        {
            ans+=n-2;
        }

    }
    cout<<ans<<endl;
}

int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
    }
