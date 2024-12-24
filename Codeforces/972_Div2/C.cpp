#include<bits/stdc++.h>
using namespace std;

string s="narek";

int n;

int recursion(vector<string>&v,int idx,int letter,vector<vector<int>>&dp)
{

    if(idx==n)
    {
        return -2*letter;
    }

    if(dp[idx][letter]!=-1)
    {
        return dp[idx][letter];
    }

    int notTake=recursion(v,idx+1,letter,dp);

    int take=0; 

    int index=letter;
    for(auto c:v[idx])
    {
        if(c==s[index])
        {
            take++;

            index=(index+1)%5;

        }
        else
        {
            if(c=='n'||c=='a'||c=='r'||c=='e'||c=='k')
            {
                take--;
            }
        }
    }
    take+=recursion(v,idx+1,index,dp);

    return dp[idx][letter]=max(take,notTake);
}

void solve(){
    
    int m;
    cin>>n>>m; 


    std::vector<string> v(n);

    for(int i=0;i<n; i++)
    {
        cin>>v[i];
    }

    vector<vector<int>>dp(n,vector<int>(5,-1));


cout<<recursion(v,0,0,dp)<<endl;;


}

int32_t main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
    }
