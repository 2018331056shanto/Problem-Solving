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
       
        int n,k;
        cin>>n>>k;
        vector<int>a;
        int mn=1000000;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
            mn=min(mn,c);

        }
        long int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=((k-a[i])/mn);
        }
        int d=(k-mn)/mn;
        cout<<ans-d<<endl;
    }
        

       
}