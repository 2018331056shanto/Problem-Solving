#include<bits/stdc++.h>
using namespace std;
#define  ll long long 
ll int pro(ll int a,ll int b,ll int x,ll int y,ll int n)
{
    ll t=min(a-x,n);
    a-=t;
    n-=t;
    t=min(b-y,n);
    b-=t;
    return a*b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        cout<<min(pro(a,b,x,y,n),pro(b,a,y,x,n))<<endl;
        
    }
}