#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

// Function to calculate modular exponentiation
ll mod_exp(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0, sum_of_squares = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum = (sum + a[i]) % MOD;
            sum_of_squares = (sum_of_squares + a[i] * a[i]) % MOD;
        }
        
        ll P = (sum * sum - sum_of_squares + MOD) % MOD;
        // Q = n * (n - 1)
        ll Q = ((ll)n * (n - 1)) % MOD;
        // Find Q's modular inverse
        ll Q_inv = mod_exp(Q, MOD - 2, MOD);
        
        ll result = (P * Q_inv) % MOD;
        cout << result << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}




long long BigMod(long long a, long long p, long long M){
    if(!p) return (1%M);
    long long x=BigMod(a, p/2, M);
    x=(x*x)%M;//Overflow?
    if(p&1) x=(x*a)%M;
    return x;
}
 
long long getInv(long long n, long long M){
    return BigMod(n, M-2, M);
}



#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

void solve(){
	
	int n;
	cin>>n; 

	vector<int>v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	int sum=accumulate(v.begin(),v.end(),0);
	// cout<<sum<<endl;

	int sq=((sum%mod)*(sum%mod))%mod;

	int inv=getInv(sq,mod);

	cout<<(sq*inv)%mod<<endl;

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
