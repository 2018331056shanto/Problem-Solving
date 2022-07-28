#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        cout<<"Case "<<++cnt<<": ";
        long long n,k;
        cin>>n>>k;
        if(k>n)
        {
            cout<<0<<endl;
        }
        else if(k==0)
        {
            cout<<1<<endl;
        }
        else
        {
            unsigned long long s=1;
            // int l=n;
            // for(int i=1;i<=k;i++)
            // {
            //    // cout<<l<<endl;
            //     s*=(l*l);
            //     --l;
            // }
          // cout<<s<<endl;
             long long fact=1;
            for(int i=1;i<=k;i++)
            {
                fact*=i;
            }
            while(k)
            {
                long long gcd=__gcd(n*n,fact);
                 long long tem=(n*n)/gcd;
                s=s*tem;
                fact/=gcd;
                k--;
                n--;
            }
            //cout<<fact<<endl;
            cout<<s<<endl;
        }

    }
}