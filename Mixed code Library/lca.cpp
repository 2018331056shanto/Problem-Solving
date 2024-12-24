
// // //LCA using sparse table
// // //Complexity: O(NlgN,lgN)
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define mx 100002
// // #define pb push_back
// // int L[mx]; //লেভেল
// // int P[mx][22]; //স্পার্স টেবিল
// // int T[mx]; //প্যারেন্ট
// // vector<int>g[mx];
// // void dfs(int from,int u,int dep)
// // {
// //     T[u]=from;
// //     L[u]=dep;
// //     for(int i=0;i<(int)g[u].size();i++)
// //     {
// //         int v=g[u][i];
// //         if(v==from) continue;
// //         dfs(u,v,dep+1);
// //     }
// // }

// // int lca_query(int N, int p, int q) //N=নোড সংখ্যা
// //   {
// //       int tmp, log, i;

// //       if (L[p] < L[q])
// //           tmp = p, p = q, q = tmp;

// //         log=1;
// //       while(1) {
// //         int next=log+1;
// //         if((1<<next)>L[p])break;
// //         log++;

// //       }

// //         for (i = log; i >= 0; i--)
// //           if (L[p] - (1 << i) >= L[q])
// //               p = P[p][i];

// //       if (p == q)
// //           return p;

// //         for (i = log; i >= 0; i--)
// //           if (P[p][i] != -1 && P[p][i] != P[q][i])
// //               p = P[p][i], q = P[q][i];

// //       return T[p];
// //   }

// // void lca_init(int N)
// //   {
// //       memset (P,-1,sizeof(P)); //শুরুতে সবগুলো ঘরে -১ থাকবে
// //       int i, j;
// //        for (i = 0; i < N; i++)
// //           P[i][0] = T[i];

// //       for (j = 1; 1 << j < N; j++)
// //          for (i = 0; i < N; i++)
// //              if (P[i][j - 1] != -1)
// //               {//cout<<j<<endl;
// //                  P[i][j] = P[P[i][j - 1]][j - 1];
// //                  //cout<<"P[i][j] :"<<P[i][j]<<" "<<"P[P[i][j-1]][j-1] :"<<P[P[i][j-1]][j-1]<<" "<<" "<<" P[i][j-1] : "<<P[i][j-1]<<endl;
 
// //               }
                
// // }
// // int main(void) {
// // 	g[0].pb(1);
// // 	g[1].pb(2);
// // 	g[2].pb(3);
// // 	g[3].pb(4);
// //   g[4].pb(5);
// //   g[5].pb(6);
// //   g[6].pb(14);
// //   g[6].pb(7);
// //   g[1].pb(8);
// //   g[8].pb(9);
// //   g[9].pb(10);
// //   g[10].pb(11);
// //   g[11].pb(15);
// //   g[11].pb(12);
// //   g[12].pb(16);
// //   g[12].pb(13);
// // 	dfs(0, 0, 0);
// // 	lca_init(16);
// // 	printf( "%d\n", lca_query(16,14,11) );
// //   for(int i=0;i<16;i++)
// //   {
// //     for(int j=0;j<16;j++)
// //     {
// //       cout<<P[i][j]<<" ";
// //     }
// //     cout<<endl;
// //   }
// //   cout<<endl;
// //   for(int i=0;i<16;i++)
// //   {
// //     cout<<T[i]<<" ";
// //   }
// //   cout<<endl;
// // 	return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int parent[1000];
// vector<int>v[1000];
// int depth[1000];
// int LOG=20;
// int up[1000][20];

// void dfs(int par)
// {
//   for(int i=0;i<v[par].size();i++)
//   {
//     // cout<<par<<endl;
//     if(v[par][i]==par)
//       continue;
//     up[v[par][i]][0]=par;
//     parent[v[par][i]]=par;
//     depth[v[par][i]]=depth[par]+1;
//     for(int j=1;j<LOG;j++)
//     {
//       up[v[par][i]][j]=up[up[v[par][i]][j-1]][j-1];
//     }
//     // cout<<"hello "<<endl;
//     dfs(v[par][i]);
//   }
// }
// int lowestCommonAncestor(int a,int b)
// {
//   if(depth[a]<depth[b])
//   {
//     swap(a,b);
//   }
//   int k=depth[a]-depth[b];
//   cout<<"k "<<k<<endl;
//   for(int i=LOG-1;i>=0;i--)
//   {
//     if(k & (i<<1))
//     {
//       cout<<"&& "<<i<<endl;
//       a=up[a][i];
//     }
//   }
//   // cout<<"after same level "<<a<<endl;
//   if(a==b)
//   {
//     return a;
//   }
//   for(int j=LOG-1;j>=0;j--)
//   {
//     if(up[a][j]!=up[b][j])
//     {
//       a=up[a][j];
//       b=up[b][j];
//     }
//   }
//   // cout<<"hello "<<a<<endl;
//   return up[a][0];
// }
// int main()
// {
//   ios_base::sync_with_stdio(false); cin.tie(NULL);
//   int n,m;
//   cin>>n>>m;
// for(int i=0;i<m;i++)
// {
//   int x,y;
//   cin>>x>>y;
//   v[x].push_back(y);
//   // v[y].push_back(x);
// }
// dfs(0);
// int q;
// cin>>q;
// for(int i=0;i<q;i++)
// {
//   int x,y;
//   cin>>x>>y;
//   int ans=lowestCommonAncestor(x,y);
//   cout<<ans<<endl;
// }
  
//   for(int i=1;i<9;i++)
//   {
//     for(int j=0;j<7;j++)
//     {
//       cout<<up[i][j];
//     }
//     cout<<endl;
//   }
// }
// video https://youtu.be/dOAxrhAUIhA
// problem https://www.spoj.com/problems/LCASQ/
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;
const int LOG = 14;
vector<int> children[MAX_N];
int up[MAX_N][LOG]; // up[v][j] is 2^j-th ancestor of v
int depth[MAX_N];

void dfs(int a) {
  for(int b : children[a]) {
    depth[b] = depth[a] + 1;
    up[b][0] = a; // a is parent of b
    for(int j = 1; j < LOG; j++) {
      up[b][j] = up[up[b][j-1]][j-1];
    }
    dfs(b);
  }
}

int get_lca(int a, int b) { // O(log(N))
  if(depth[a] < depth[b]) {
    swap(a, b);
  }
  // 1) Get same depth.
  int k = depth[a] - depth[b];
  for(int j = LOG - 1; j >= 0; j--) {
    if(k & (1 << j)) {
      cout<<"fuck "<<endl;
      a = up[a][j]; // parent of a
    }
  }
  // 2) if b was ancestor of a then now a==b
  if(a == b) {
    return a;
  }
  // 3) move both a and b with powers of two
  for(int j = LOG - 1; j >= 0; j--) {
    if(up[a][j] != up[b][j]) {
      a = up[a][j];
      b = up[b][j];
    }
  }
  return up[a][0];
}

int main() {
  int n;
  cin >> n;
  for(int v = 0; v < n; ++v) {
    // read children of v
    int cnt;
    cin >> cnt;
    // for(int i = 0; i < cnt; i++) {
      int c;
      cin >> c;
      children[cnt].push_back(c);
    // }
  }
  dfs(0);
  int q;
  cin >> q;
  for(int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    cout << get_lca(a, b) << "\n";
  }
  for(int i=1;i<9;i++)
  {
    for(int j=0;j<7;j++)
    {
      cout<<up[i][j];
    }
    cout<<endl;
  }
}