#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    sort(a+1,a+n+1);
    int ans = -1;
    for (int k = 0; k <= n; k++) { // k liars
      int truth = 0, lie = 0;
      for (int i = 1; i <= n; i++) {
        if (k >= a[i]) {
          truth++;
        }
        else {
          lie++;
        }
      }
      if (lie == k) {
        ans = k;
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}