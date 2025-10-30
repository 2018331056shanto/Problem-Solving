#include<bits/stdc++.h>
using namespace std;

void solve(){

	
	int n;
	cin>>n; 


	int mod=n%7;

	if(mod==0){
		cout<<n<<endl;
		return ;
	}

	int a=n+(7-mod);
	int b=n-mod;


	int c=a/10;
	int d=b/10;

if(n/10==c){
	cout<<a<<endl;
}else{

	cout<<b<<endl;
}

	
}






int main(){


	int t;
	cin>>t;
	while(t--){

		solve();

	}
}