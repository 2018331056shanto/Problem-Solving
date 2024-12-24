#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	int x=0;
	char c;
	while(cin>>n>>c)
	{
		// cout<<n<<" "<<c<<endl;
		x^=n;
	}
	cin>>n; 
	// cout<<n<<endl;
	cout<<(x^n)<<endl;
}

int32_t main()
	{
		ios_base::sync_with_stdio(false); cin.tie(NULL);
		// int t;
		// cin>>t;
		// while(t--)
		{
			solve();
		}
	}


