#include<bits/stdc++.h>
using namespace std;


void solve(){
	 int k, n;
    cin >> k >> n;
    n -= k - 1;
    vector<int> a(k);
    a[0] = 1;
    for (int i = 1; i < k; ++i) {
        a[i] = min(a[i - 1] + i - 1, n);
    }
    for (int i = 0; i < k; ++i)
        a[i] += i;
    // cout << a << '\n';
      for (int i = 0; i < k; ++i)
        cout<<a[i]<<" ";
    cout<<endl;


}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
