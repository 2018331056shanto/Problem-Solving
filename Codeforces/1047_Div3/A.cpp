#include<bits/stdc++.h>
using namespace std;


void solve(){

	int k,n;
	cin>>k>>n;

	
		int ans=n;

		for(int i=0;i<k;i++){
			ans*=2;
		}
		cout<<ans<<endl;
	
}

int main(){

	int t;
	cin>>t; 


	while(t--){
		solve();
	}
}