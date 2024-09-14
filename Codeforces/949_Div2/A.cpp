#include<bits/stdc++.h>
using namespace std;


void solve(){
	
 	int a,b;
 	cin>>a>>b; 

 		int ans=0;
 		while(b>=1)
 		{
 			ans++;
 			b/=2;
 		}
 		cout<<ans-1<<endl;
 	
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
