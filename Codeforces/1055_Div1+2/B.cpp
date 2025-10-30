#include<bits/stdc++.h>
using namespace std;

void solve(){

	int n,rk,ck,rd,cd;
	cin>>n>>rk>>ck>>rd>>cd;


	int ans=0;

	if(rk<rd){
		ans=max(ans,rd);
	}else if(rk>rd){

		ans=max(ans,n-rd);
	}

	if(ck<cd){
		ans=max(ans,cd);
	}else if(ck>cd){
		ans=max(ans,n-cd);
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




