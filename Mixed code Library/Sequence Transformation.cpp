#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);

        }
        b.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                b.push_back(a[i]);
            }
        }
        n=b.size();
        
        / /cout<<endl;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[b[i]]++;
        }
        mp[b[0]]--;
        mp[b[n-1]]--;
        int ans=n;
        for(auto x :mp)
        {
           // cout<<x.first<<" "<<x.second<<endl;
            ans=min(ans,x.second);
        }
        cout<<ans+1<<endl;
    
        
    }
}