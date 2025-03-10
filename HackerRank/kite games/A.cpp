// #include<iostream>
// #include <vector>
// #include<algorithm>

// using namespace std;

// const int mod = 1e9 + 7;

// int binarySearch(vector<vector<int>>& v, int i, int j, int m,int val) {
//     int low = 0, high = m - 1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (v[i][mid] >val) {
//             high = mid - 1; 
//         } else {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int recursion(vector<vector<int>>& v, vector<vector<int>>& dp, int i, int j, int n, int m) {
//     if (i == n) { 
//     	return 1; 
//     }

//     if (dp[i][j] != -1) {  
//         return dp[i][j];
//     }

//     int total = 0;

//     for (int k = binarySearch(v, i, j, m,v[i-1][j]); k < m; ++k) {
//         total = (total + recursion(v, dp, i + 1, k, n, m)) % mod;
//     }

//     return dp[i][j] = total;
// }

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> v(n, vector<int>(m));
//     vector<vector<int>> dp(n, vector<int>(m, -1));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> v[i][j];
//         }
//     }

//     int ans = 0;
//     for (int j = 0; j < m; j++) {
//         ans = (ans + recursion(v, dp, 1, j, n, m)) % mod;
//     }

//     cout << ans << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();  

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

void solve(){
    
     cout<<int('a');

}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t; 

    // while(t--){

        solve();
    // }
}
