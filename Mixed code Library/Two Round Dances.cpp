#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    long long int ans=0;
    ans=(fact)/((n/2)*(n/2)*2);
    cout<<ans<<endl;
}