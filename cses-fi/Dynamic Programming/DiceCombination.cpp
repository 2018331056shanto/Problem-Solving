#include <iostream>
#include <vector>

int main() {
    // It's good practice to use std::ios_base::sync_with_stdio(false); 
    // and std::cin.tie(NULL); for faster I/O in competitive programming.
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    // The modulus, as defined in the problem.
    int mod = 1e9 + 7;

    // Use a vector for the DP table. It handles memory safely.
    // dp[i] will store the number of ways to get a sum of i.
    std::vector<int> dp(n + 1, 0);

    // Base Case: There is 1 way to get a sum of 0 (by not rolling the die).
    dp[0] = 1;

    // Fill the DP table iteratively.
    for (int i = 1; i <= n; ++i) {
        // The number of ways to get sum 'i' is the sum of ways to get
        // i-1, i-2, ..., i-6.
        for (int j = 1; j <= 6; ++j) {
            if (i - j >= 0) {
                // Add the number of ways from the previous state.
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }

    // The final answer is in dp[n].
    std::cout << dp[n] << std::endl;

    return 0;
}