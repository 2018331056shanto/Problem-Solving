#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,y=0,z=0,flag=0;
        cin>>n;
        int a[10000];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=2;i<n;i++)
        {
            if(a[i-1]<a[i]&&a[i]>a[i+1])
            {
               x=i-1;
               y=i;
               z=i+1;
               flag=1;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}