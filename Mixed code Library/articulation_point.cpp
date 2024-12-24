// #include <iostream>
// #include <vector>
// #define sz 100000
// #define pb push_back
// using namespace std;

// vector<int> adj[sz];

// bool arti_point[sz], visited[sz];
// int d[sz], low[sz], l=0;

// void findArticulationPoint(int u, int par)
// {
//     low[u] = d[u] = ++l;
//     visited[u] = true;
//     int child = 0;
//     for (int i = 0; i<adj[u].size(); i++ )
//     {
//         if(adj[u][i]==par)
//             continue;
//         if(visited[ adj[u][i] ])
//             low[u] = min(low[u], d[adj[u][i]]);
//         else
//         {
//             findArticulationPoint(adj[u][i],u);
//             low[u] = min(low[u],low[ adj[u][i] ]);
//             if(d[u] <= low[ adj[u][i] ] && par!=-1)
//                 arti_point[u]=true;
//             child++;
//         }

//         if(child>1 and par==-1)
//             arti_point[u] = true;
//     }
// }
// int main()
// {
//     int n, m, x, y;
//     cin >> n >> m;

//     for (int i = 0; i<m; i++)
//     {
//         cin >> x >> y;
//         adj[x].pb(y);
//         adj[y].pb(x);
//     }

//     findArticulationPoint(0,-1);
//     cout <<"Node\td[i]\tlow[i]\n";
//     for (int i = 0; i<n; i++)
//         cout << i << "\t" << d[i] << "\t" << low[i] << "\n";

//     cout << "Articulation Point List:\n";
//     for (int i = 0; i<n; i++)
//         if(arti_point[i])
//             cout << i << "\n";

//     return 0;
// }
// /**
// 12 14
// 0 1
// 0 2
// 1 2
// 2 3
// 3 4
// 6 3
// 4 5
// 6 5
// 7 6
// 10 11
// 11 9
// 9 10
// 9 8
// 7 8

// 12 15
// 0 1
// 0 2
// 1 2
// 2 3
// 3 4
// 6 3
// 4 5
// 6 5
// 7 6
// 10 11
// 11 9
// 9 10
// 9 8
// 7 8
// 10 4
// */
// #include<bits/stdc++.h>
// using namespace std;
// std::vector<int> v[1000];
// set<pair<int,int>>st;
// int vis[1000];
// int low[1000];
// int dis[1000];
// bool artipoint[1000];
//  int l=0;
// void dfs(int child,int parent)
// {
//   ++l;
//     vis[child]=1;
//     low[child]=l;dis[child]=l;
//     int children=0;
//     for(int i=0;i<v[child].size();i++)
//     {
//         if(v[child][i]==child)
//         {
//             continue;
//         }
//         if(!vis[v[child][i]])
//         {
//             dfs(v[child][i],child);
//             children++;
//             if(low[v[child][i]]>=dis[child])
//             {
//                 st.insert({child,v[child][i]});
//                 artipoint[child]=true;
//             }
//             low[child]=min(low[v[child][i]],low[child]);

//         }
//         else
//         {
//             low[child]=min(low[child],dis[v[child][i]]);
//         }
//         if(children>1&&parent==-1)
//         {
//             st.insert({child,v[child][i]});
//             artipoint[child]=true;
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     int node,edge;
//     cin>>node>>edge;
//     for(int i=0;i<edge;i++)
//     {
//         int start,end;
//         cin>>start>>end;
//         v[start].push_back(end);
//         v[end].push_back(start);

//     }
//     dfs(0,-1);
//     // for(auto x:st)
//     //     cout<<x.first<<" "<<x.second<<endl;
//     for(int i=0;i<20;i++)
//     {
//         if(artipoint[i])
//             cout<<i<<endl;
//     }
    
    
// }