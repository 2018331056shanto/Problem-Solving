#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
typedef pair<int,int>pii;
#define first fi
#define second se
#define  LL long long
#define fread() freopen("in.txt","r",stdin)
#define fwrite() freopen("out.txt","w",stdout)

const int MAXN = 2e4+10;
const int MAXM = 1e6;
const int mod = 1e9+7;
const int inf = 0x3f3f3f3f;

int n,m;
vector<int>ve[MAXN];
int dp[MAXN]; int son[MAXN];
void init(){
    for(int i=0;i<=n;i++) 
        ve[i].clear();
}
void dfs(int now,int pre){ //This dfs is just to get the number of nodes in the subtree rooted at each node
    son[now]=1;
    for(int i=0;i<ve[now].size();i++){
        int v=ve[now][i];
        if(v==pre) continue;;
        dfs(v,now);
        son[now]+=son[v];
        printf("%d\n",son[now]);
    }
}
/*For each node (except the root node), it is either rooted at its son node
 The lower subtree, or the upper subtree rooted at its parent node, the lower subtree is our first
 A dfs has been calculated, the upper subtree is the total number of nodes n-the lower one with itself as the root node
 Part of the subtree, traverse once to get the maximum value*/
void DFS(int now,int pre){
    for(int i=0;i<ve[now].size();i++){
        int v=ve[now][i];
        if(v==pre){
             dp[now]=max(dp[now],n-son[now]);
             continue;
        }
        DFS(v,now);
        dp[now]=max(dp[now],son[v]);
    }
} 
int main(){

//  fread();
//  fwrite();
    int t;scanf("%d",&t);
    while(t--){
        scanf("%d",&n);m=n-1;
        init();
        while(m--){
            int a,b;scanf("%d%d",&a,&b);
            ve[a].push_back(b);
            ve[b].push_back(a);
        }
        dfs(1,-1);
        for(int i=1;i<=n;i++) printf("%d ",son[i]); puts("");
        memset(dp,0,sizeof(dp)); 
        DFS(1,0);
    //  for(int i=1;i<=n;i++) printf("%d ",dp[i]);
        int ans,sum=inf;
        for(int i=1;i<=n;i++){
            if(sum>dp[i]) {
                sum=dp[i];
                ans=i;
            }
        }
        printf("%d %d\n",ans,sum);
    } 
    return 0;
}