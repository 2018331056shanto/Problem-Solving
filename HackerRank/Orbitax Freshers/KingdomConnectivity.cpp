// #include<bits/stdc++.h>
// using namespace std;

// const int MOD=1e9;
// vector<int>dp(1e5+100,-1);
// int backTrack(vector<vector<int>>&v,int start,int target,vector<int>&visited,int &ans,bool &flag)
// {


//     if(start==target)
//     {
//         ans++;
//         return 1;
//     }

//     if(dp[start]!=-1)
//     {
//     	return dp[start];
//     }

//     visited[start]=1;

//     int ll=0;
//     for(int i=0;i<v[start].size();i++)
//     {
//         int next=v[start][i];
//         if(!visited[next])
//         {
//             ll=(ll+backTrack(v,next,target,visited,ans,flag))%MOD;
//             visited[next]=0;
//         }
//         else
//         {
//         	// cout<<start<<" "<<next<<endl;
//             flag=true;
//         }
//     }

//     // cout<<"return ; "<<ll<<" "<<start<<endl;
//     return dp[start]=ll%MOD;

// }

// void solve(){

//     int n,m;
//     cin>>n>>m; 

//     std::vector<vector<int>> v(n+1);


//     for(int i=0;i<m;i++)
//     {
//         int x,y;
//         cin>>x>>y; 


//         v[x].push_back(y);
//     }    

//     vector<int>visited(n+1);
//     int ans=0;
//     bool flag=false;
//     backTrack(v,1,n,visited,ans,flag);

  
//     if(flag&&ans!=0)
//     {
//         cout<<"INFINITE PATHS"<<endl;
//     }
//     else
//     {
//     	cout<<dp[1]<<endl;
// 	}
// }

// int32_t main()
//     {
//         ios_base::sync_with_stdio(false); cin.tie(NULL);
//         // int t;
//         // cin>>t;
//         // while(t--)
//         {
//             solve();
//         }
//     }




#include <bits/stdc++.h>
using namespace std;
int N,M;
const int MN = 1<<15;
vector<int> E[MN];
int color[MN];
typedef pair<int,bool> P;
P dp[MN];
const int Z = 1000000000;

P dfs(int n)
{
    if (n == N) 
        return P(1,1);
    if (color[n] == 1) 
        return P(-1, 0);
    if (color[n] == 2) 
        return dp[n];
    color[n] = 1;
    bool cycle = 0;
    bool found = 0;
    int r = 0;
    for(int t : E[n]) 
    {
        P p = dfs(t);
        int x = p.first;
        found |= p.second;
        if (x < 0) 
            cycle = 1;
        else 
            r = (r + x) % Z;
    }
    P p;
    p.first = cycle && found ? -1 : r;
    p.second = found;
    color[n] = 2;
    return dp[n] = p;
}

int main() 
{
    cin.sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < M; ++i) 
    {
        int a, b;
        cin >> a >> b;
        E[a].push_back(b);
    }
    P r = dfs(1);
    int x = r.first;
    if (x < 0) 
        cout << "INFINITE PATHS\n";
    else 
        cout << x << endl;
}