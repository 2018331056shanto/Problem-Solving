#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n,k;
	cin>>n>>k;

	cout<<ceil((double)(n-1)/(double)(k-1))<<endl;

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
