#include<bits/stdc++.h>

using namespace std;

bool matchesTemplate(const vector<int>& a, const string& s) {
    unordered_map<int, char> numToChar;
    unordered_map<char, int> charToNum;

    for (int i = 0; i < a.size(); ++i) {
        if (numToChar.find(a[i]) == numToChar.end() && charToNum.find(s[i]) == charToNum.end()) {
            numToChar[a[i]] = s[i];
            charToNum[s[i]] = a[i];
        } else {
            if (numToChar[a[i]] != s[i] || charToNum[s[i]] != a[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;
            if (s.length() != n) {
                cout << "NO" << endl;
            } else {
                if (matchesTemplate(a, s)) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
