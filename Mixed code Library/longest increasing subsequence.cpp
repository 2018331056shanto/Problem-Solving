dp[1000];
for(int i=1;i<n;i++)
{
    for(int j=0;j<i;j++)
    {
        if(a[i]>a[j]&&dp[i]<dp[j]+1)
        dp[i]=dp[j]+1ujm ;
    }
}