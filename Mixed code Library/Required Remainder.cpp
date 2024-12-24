#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,m,n, k;
        cin>>x>>y>>k;
        m=k%x;
        if(m==y)
        {
            cout<<k<<endl;
        }
        else
        {
             if(m>y)
             {
                 cout<<k-(m-y)<<endl;
             }
             else
             {
                 cout<<k-(m+(x-y))<<endl;
             }
             
        }
        
    }
}