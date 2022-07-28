#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum=0;

        cin>>n>>m;
        int a[10000];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n,greater<int>());
        if(sum>=m)
            cout<<m<<endl;
        else if(sum<m)
            cout<<sum<<endl;
        else
            cout<<a[0]<<endl;

    }
}
