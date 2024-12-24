#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,m,k;
	cin>>n>>m>>k;

	cout<<(min(n,k)*min(m,k))<<endl;
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
