#include<bits/stdc++.h>
using namespace std;


void solve(){

	 long long a,b;
	cin>>a>>b;

	if((a&1)&&(b&1)){

		cout<<(a*b+1)<<endl;
		return;
	}

	if(b&1){
		cout<<-1<<endl;
		return;
	}
	a*=b/2;

	if(a&1){
		cout<<-1<<endl;
		return;
	}

	cout<<(a+2)<<endl;

}

int main(){

	int t;
	cin>>t; 


	while(t--){
		solve();
	}
}