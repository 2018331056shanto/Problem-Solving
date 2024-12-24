#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int main()
{
    int amount;
    cin>>amount;
    int coins[100]={0};
    //cout<<"fuck";
    int totcon;
    cin>>totcon;
    for(int i=0;i<totcon;i++)
    {
        cin>>coins[i];
        //cout<<coins[i]<<endl;
    }
    
    for(int i=0;i<=totcon;i++)
    {
        dp[i][0]=1;
    }
    for(int i=1;i<=totcon;i++)
    {
        for(int j=0;j<=amount;j++)
        {
            if(coins[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
            }
        }

    }
cout<<dp[totcon][amount]<<endl;
}
