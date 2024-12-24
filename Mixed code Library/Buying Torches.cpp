#include<bits/stdc++.h>
using namespace std;
long long int sol(long long int a,long long int b)
{
    return(a+b-1)/b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,k;
        cin>>x>>y>>k;
        long long int ans=sol(k*y+k-1,x-1);

        cout<<ans+k<<endl;
    }
}