#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1e5 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }

        vector<int> dp(n, -1); // dp[i] stores the maximum number of passes to reach person i
        dp[0] = 0; // The ball starts with person 1, so no passes are needed

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (h[i] < h[j] && dp[i] != -1) {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << dp[i] << "\n";
        }
    }

    return 0;
}