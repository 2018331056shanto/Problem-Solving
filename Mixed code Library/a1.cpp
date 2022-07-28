#include<bits/stdc++.h>
using namespace std;
long long int dp[100];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    dp[1]=dp[2]=dp[3]=1;
    for(int i=4;i<61;i++)
    {
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];

    }
    int n;
    int cs=1;
    while(cin>>n&&n)
    {
        
        cout<<"Case "<<cs<<": "<<dp[n]<<endl;
        cs++;
    }
}    