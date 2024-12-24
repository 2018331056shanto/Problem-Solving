#include<bits/stdc++.h>

using namespace std;

struct Factor
{
    int two,five;
};
Factor dp[1004][1004];
Factor pre[1004][1004];
Factor factor_find(int x)
{
    
    Factor f;
    int two=0;
    int five=0;
    if(x!=0)
    {


    while(x%2==0)
    {
        two++;
        x/=2;
    }
    while(x%5==0)
    {
        five++;
        x/=5;
    }
    f.two=two;
    f.five=five;
}
else
{
    f.two=0;
    f.five=0;   
   
}
     return f;
}
int main()
{

    int n;
    cin>>n;
    int ar[n+1][n+1];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {

            cin>>ar[i][j];
        }

    }
    for(int i=0;i<=1004;i++)
    {
        for(int j=0;j<=1004;j++)
        {

            if(i==0||j==0)
            {
                
                dp[i][j].two=0;
                dp[i][j].five=0;
                pre[i][j].two=0;
                pre[i][j].five=0;
            }
            // p[i][j]=0;
        }

    }
    // for(int i=1;i<=n+1;i++)
    // {
    //     for(int j=1;j<=n+1;j++)
    //     {
    //         // cout<<dp[i][j].two<<" "<<dp[i][j].five;
    //         cout<<pre[i][j].two<<" "<<pre[i][j].five;
    //     }
    //     cout<<endl;
    // }
    // cout<<"fuck you titu"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1)
            {
                int x=ar[i][j];
                // cout<<"row 1 "<<x<<endl;
                Factor fact=factor_find(x);
                int two=fact.two;
                int five=fact.five;
                // cout<<two<<" 1 "<<five<<endl;
                // if(j==3)
                // {
                //     cout<<two<<" "<<five<<endl;
                //     cout<<dp[i][j-1].two<<" "<<dp[i][j-1].five<<endl;
                // }
                dp[i][j].two=dp[i][j-1].two+two;
                dp[i][j].five=dp[i][j-1].five+five;
                pre[i][j].two=two;
                pre[i][j].five=five;
            }
            else if(j==1)
            {
                int x=ar[i][j];
                Factor fact=factor_find(x);
                int two=fact.two;
                int five=fact.five;

                // cout<<two<<" fuck "<<five<<" "<<x<<endl;

                dp[i][j].two=dp[i-1][j].two+two;
                dp[i][j].five=dp[i-1][j].five+five;
                pre[i][j].two=two;
                pre[i][j].five=five;
            }
            else
            {
                int x=ar[i][j];
                Factor fact=factor_find(x);
                int two=fact.two;
                int five=fact.five;
                // cout<<two<<" 3 "<<five<<endl;
                int tem1=dp[i][j-1].two+two;
                int tem2=dp[i][j-1].five+five;
                int mn=min(tem1,tem2);
                int tem3=dp[i-1][j].two+two;
                int tem4=dp[i-1][j].five+five;
                int mn1=min(tem3,tem4);
                if(mn>mn1)
                {
                    dp[i][j].two=dp[i-1][j].two+two;
                    dp[i][j].five=dp[i-1][j].five+five;

                }
                 else if(mn<mn1)
                {
                    dp[i][j].two=dp[i][j-1].two+two;
                    dp[i][j].five=dp[i][j-1].five+five;

                }
                else
                {
                     if(tem1+tem2<tem3+tem4)
                    {
                        dp[i][j].two=dp[i][j-1].two+two;
                        dp[i][j].five=dp[i][j-1].five+five;
                        
                    }
                    else
                    {
                         dp[i][j].two=dp[i-1][j].two+two;
                        dp[i][j].five=dp[i-1][j].five+five;
                       
                    }
                }
                pre[i][j].two=two;
                 pre[i][j].five=five;
                

            }
            

        }
    }
   
    string s;
    int i=n,j=n;
    for(i;i>=1;i--)
    {
        for(j;j>=1;j--)
        {
            
            int ptwo=pre[i][j].two;
            int pfive=pre[i][j].five;
            // cout<<i<<" "<<j<<endl;
            // cout<<ptwo<<" two five p "<<pfive<<endl;
            if((dp[i][j-1].two+ptwo)==dp[i][j].two &&(dp[i][j-1].five+pfive==dp[i][j].five)&&j>1)
            {

                // cout<<ar[i][j]<<endl;
                s+="R";

            }
            else if((dp[i-1][j].two+ptwo)==dp[i][j].two &&(dp[i-1][j].five+pfive==dp[i][j].five))
            {
                 // cout<<ar[i][j]<<endl;
                j=j;
                s+="D";
                break;
                
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<dp[i][j].two<<dp[i][j].five<<" ";
            // cout<<pre[i][j].two<<pre[i][j].five<<" ";
        }
        cout<<endl;
    }
    // cout<<"fuck titu"<<endl;
    //  for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         // cout<<dp[i][j].two<<dp[i][j].five<<" ";
    //         cout<<pre[i][j].two<<pre[i][j].five<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<min(dp[n][n].two,dp[n][n].five)<<endl;
    if(!s.empty())
    s.pop_back();
    reverse(s.begin(),s.end());

    cout<<s<<endl; 
    // cout<<pre[1][1].two<<" "<<pre[1][1].five<<endl;
}
