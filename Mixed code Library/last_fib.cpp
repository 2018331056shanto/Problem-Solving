#include <bits/stdc++.h>
using namespace std;

int get_fibonacci_last_digit(long long n) {
    int f = 0;
    int s = 1;

    int res;

    for (int i = 2; i <= n; i++) {
        res = (f + s) % 10;
        f = s;
        s = res;
    }

    return res;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';

    return 0;
}