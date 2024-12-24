#include<bits/stdc++.h>
using namespace std;


void solve(){
	
	int n;
	cin>>n;
	int m=(n+1)/2;
	cout<<m<<endl;
	for (int i = 0; i < (m); ++i)
	{
		/* code */
		cout<<3*i+1<<" "<<3*(n-i)<<endl;
		
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
