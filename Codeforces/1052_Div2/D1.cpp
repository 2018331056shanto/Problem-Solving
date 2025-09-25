#include<bits/stdc++.h>
using namespace std;

void solve(){

	int l,r;
	cin>>l>>r;
	int sum=0;
	for(int i=r;i>=l;i--){
		
		sum+=((r-i)|i);

	}
	cout<<sum<<endl;
	for(int i=r;i>=l;i--){
		
		cout<<i<<" ";

	}
	cout<<endl;

	
}


int main(){


	int t;
	cin>>t;
	while(t--){

		solve();

	}
}