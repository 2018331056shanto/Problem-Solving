#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	long long n,k,x;
	cin>>n>>k>>x;

	 if (k*(k + 1)/2<=x&&x<=k*(2*n-k+1)/2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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
