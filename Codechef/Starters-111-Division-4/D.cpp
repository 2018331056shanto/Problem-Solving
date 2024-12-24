#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        const int mod = 1e9 + 7;
        int ans = 1;
        vector <int> f(26, 0);
        for (int i = 0; i < n; i++){
            f[s[i] - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) ans = 1LL * ans * (f[i] + 1) % mod;
        ans--;
        if (ans < 0) ans += mod;
        
        cout << ans << "\n";
    }
    return 0;
}