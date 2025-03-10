#include <bits/stdc++.h>
using namespace std;

int bfs(int start, vector<vector<int>>& adj, vector<int>& team, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    team[start] = 0;
    visited[start] = true;
    
    int count[2] = {1, 0};
    bool is_bipartite = true;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                team[neighbor] = 1 - team[node];
                count[team[neighbor]]++;
                visited[neighbor] = true;
                q.push(neighbor);
            } else if (team[neighbor] == team[node]) {
                is_bipartite = false;
            }
        }
    }
    
    return is_bipartite ? max(count[0], count[1]) : count[0] + count[1];
}

int solve() {
    int m;
    cin >> m;
    int n = 0;
    vector<pair<int,int>> temp;
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        n = max(n, max(u, v)); 
        temp.push_back({u, v});
    }
    
    vector<vector<int>> adj(n + 1); 
    vector<int> team(n + 1, -1); 
    vector<bool> visited(n + 1, false);
    
    for (auto& p : temp) {
        adj[p.first].push_back(p.second);
        adj[p.second].push_back(p.first);
    }
    
    int max_team_size = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            max_team_size += bfs(i, adj, team, visited);
        }
    }
    
    return max_team_size;
}

int main() {
    int t;
    cin >> t; 
    for (int i = 1; i <= t; i++) {
        cout << "Tournament " << i << ": " << solve() << endl;
    }
}