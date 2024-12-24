#include<bits/stdc++.h>

using namespace std;

bool generatebinary(string &s) {
    int idx = s.size() - 1;
    while (idx >= 0 && s[idx] == '1') {
        s[idx] = '0';
        --idx;
    }
    if (idx >= 0) {
        s[idx] = '1';
        return true;
    }
    return false;
}

void solve() {
    int t;
    cin >>t;
    vector<string> out;
    out.reserve(t);
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        set<string> uniqueSub;
        for (int i = 0; i <= n - k; ++i) {
            uniqueSub.insert(s.substr(i, k));
        }
        
        string binary(k, '0');
        bool found = false;
        
        while (!found) {
            if (uniqueSub.find(binary) == uniqueSub.end()) {
                out.push_back(binary);
                found = true;
            } else if (!generatebinary(binary)) {
                out.push_back("-1");
                found = true;
            }
        }
    }
    
    for (auto x : out) {
        cout << x << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();   
}
