#include<bits/stdc++.h>
using namespace std;

const int m=32;

void solve(){
	
	

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	a.insert(a.begin(),0);
	
	for(int i = 1; i <= n; i++){
		a[i] ^= a[i-1];
	}
	
	vector<int> actual(n+1);
	
	for(int i = 1; i <= n; i++){
		actual[i] = a[i] ^ a[i-1];
	}
	
	vector<int> prefix(m);
	vector<int> suffix(m);
	//for jth bit which prefix has set bit and we are counting it 
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < m; j++){
			if(1ll << j & a[i]){
				prefix[j]++;
			}
		}
	}
	
	
	long long ans = 0;
	for(int i = 1; i <= n; i++){
		
		for(int j = m-1; j >= 0; j--){
			// now we are counting what will happen if we add the input value as Ay 
			if(1ll << j & actual[i]){
				
				
				ans += prefix[j] * suffix[j];// for two set bit at jth position 
				ans += (long long)(n-i+1 - prefix[j]) *(long long) (i - suffix[j]);// tow unset bit at jth position 
				
				break;
			}
		}
		
		
		for(int j = 0; j < m; j++){
			if(1ll << j & a[i]){
				prefix[j]--;
				suffix[j]++;
			}
		}
	}
	
	
	
	cout << ans << '\n';
	
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
