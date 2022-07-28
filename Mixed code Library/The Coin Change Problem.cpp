#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a;
    for(int i=0;i<m;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);

    }
    sort(a.begin(),a.end());
    long long int dp[100][300];
    
    for(int i=0;i<m;i++)
    {
        dp[i][0]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%a[0]==0)
        {
            dp[0][i]=1;
        }
        else
        {
            dp[0][i]=0;
        }
        
    }
   
    for(int i=1;i<a.size();i++)
    {
        for(int j=1;j<=n;j++)
        {
            
           
            if(a[i]<=j)
            
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-a[i]];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
             
            
        }
    }
   
    cout<<dp[a.size()-1][n]<<endl;
    
}