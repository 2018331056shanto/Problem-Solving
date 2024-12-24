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
        long int sum=0;
        int n,x;
        int a[10000];
        int cnt=0;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+(a[i]-x);
            if(x==a[i])
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            cout<<"0"<<endl;
        }
        else if(sum==0)
        {
            cout<<"1"<<endl;
        }
        else if(cnt>0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
        

    }
}