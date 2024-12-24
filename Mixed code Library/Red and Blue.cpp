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
        int mx1=0,mx2=0;
        int cur=0;
        for(int i=0;i<n;i++)
        {
            int r;
            cin>>r;
            cur+=r;
            mx1=max(cur,mx1);

        }
        cur=0;
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            cur+=x;
            mx2=max(cur,mx2);
        }
        cout<<mx1+mx2<<endl;
    }
}